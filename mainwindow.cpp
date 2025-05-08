// 该文件主要是实现大体功能的槽函数的定义，与槽函数与具体元件的连接，背景设置
//以下几个功能函数的实现有些地方类似，都主要在第一个函数addScheduleButtonClicked解释，以后就不再解释
//于2024.6.6增加了背景设置，见25行
//2024.6.11修改了代码的模板的规范性和注释的规范性
//2024.6.11修改了bookTicketButtonClicked()，rescheduleTicketButtonClicked()，在订票改签前先检查所输入的座位是否已经被选
//2024.6.12新增了registerButtonclicked()的定义，用来弹出新的窗口
//2024.6.13修改了代码的模板的规范性和注释的规范性
//2024.6.18修改了searchScheduleButtonClicked()函数，使若没有匹配信息报错提醒
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "TrainSchedule.h"//时刻信息
#include "FileManager.h"//对于储存时刻信息文件的处理
#include "Ticket.h"//票务信息
#include "TicketManager.h"//对于储存票务文件的管理
#include <QMessageBox>
#include "UserManager.h"//用于验证输入姓名与密码是否匹配，匹配才能执行（后加）
#include "passworddialog.h"//用于实现新的函数onaddScheduleButtonclicked中验证密码二添加的类（后加）
#include "RegisterDialog.h"//用于新增用户密码或者用来修改密码

//对应的hchsk用于储存时刻表信息，ticket用于储存乘客的piaowu信息
const QString SCHEDULE_FILE = "hchsk.dat";//使用非POD（Plain Old Data）类型作为全局静态变量会引起问题。QString 不是一个POD类型，因此它可能会导致这样的错误。需要改的话，用scheduleFileName()
const QString TICKET_FILE = "tickets.dat";//同理如此

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //为页面（这里是整个程序界面）设置背景图片
    QString backgroundImagePath = ":/back.jpg";
    QFile file(backgroundImagePath);
    this->setStyleSheet("QMainWindow { background-image: url(" + backgroundImagePath + "); "
                        "background-repeat: no-repeat;background-size: cover;background-position: center; }");

    // 连接信号和槽，将对应的ui设计界面上的按钮连接到实现该功能的函数上（按下按钮，执行）

    //将槽函数修改为onaddScheduleButtonclicked来实现添加前验证密码，只有密码正确才会执行addScheduleButtonClicked
    connect(ui->addScheduleButton, &QPushButton::clicked, this, &MainWindow::onaddScheduleButtonclicked);//添加时刻信息按钮
    connect(ui->searchScheduleButton, &QPushButton::clicked, this, &MainWindow::searchScheduleButtonClicked);//时刻信息查询按钮
    connect(ui->statisticsButtonByEndStation, &QPushButton::clicked, this, &MainWindow::statisticsByEndStationButtonClicked);//按到达站统计
    connect(ui->statisticsButtonByStartStation, &QPushButton::clicked, this, &MainWindow::statisticsByStartStationButtonClicked);//按出发站统计按钮的连接
    connect(ui->bookTicketButton, &QPushButton::clicked, this, &MainWindow::bookTicketButtonClicked);//订票确定按钮的连接
    connect(ui->cancelTicketButton, &QPushButton::clicked, this, &MainWindow::cancelTicketButtonClicked);//退票确定按钮的连接
    connect(ui->rescheduleTicketButton, &QPushButton::clicked, this, &MainWindow::rescheduleTicketButtonClicked);//改签确定按钮的连接
    connect(ui->clearSchedulesButton, &QPushButton::clicked, this, &MainWindow::clearSchedulesButtonClicked);  // 连接清空文件按钮
    connect(ui->searchTicketsButton, &QPushButton::clicked, this, &MainWindow::searchTicketsButtonClicked);  // 连接搜索票按钮
    connect(ui->pushButtonClearQuery, &QPushButton::clicked, this, &MainWindow::clearQueryFields);//时刻信息查询清空按钮的连接
    connect(ui->pushButtonClearTickets, &QPushButton::clicked, this, &MainWindow::clearTicketFields);//票务查询清空按钮的连接
    connect(ui->registerButton, &QPushButton::clicked, this, &MainWindow::registerButtonclicked);//连接注册或修改按钮

}

//析构函数
MainWindow::~MainWindow()
{
    delete ui;
}

//以下是所有槽函数的具体定义与实现
//用于实现在点击添加按钮前先要认证密码
void MainWindow::onaddScheduleButtonclicked()
{
    PasswordDialog passwordDialog(this);
    if (passwordDialog.exec() == QDialog::Accepted)
    {
        QString password = passwordDialog.getPassword();
        if (password == "123456") //设置密码
        {
            //以下才是实现添加时刻信息的函数，只有密码正确才会执行addScheduleButtonClicked
            addScheduleButtonClicked();
        }
        else
        {
            QMessageBox::warning(this, "错误", "密码错误！");
        }
    }
}

// 添加火车时刻信息，将相关信息输入到SCHEDULE_FILE也就是hchsk.dat中
void MainWindow::addScheduleButtonClicked()
{
    TrainSchedule schedule;
    schedule.trainNumber = ui->lineEditTrainNumber->text();
    schedule.date = ui->lineEditDate->text();
    schedule.startStation = ui->lineEditStartStation->text();
    schedule.endStation = ui->lineEditEndStation->text();
    schedule.startTime = ui->lineEditStartTime->text();
    schedule.endTime = ui->lineEditEndTime->text();
    schedule.price = ui->lineEditPrice->text();//从对应的输入框中变量赋予给trainschedule对象schedule的变量中（不同属性）
    //注以下的几个功能函数的这个位置都是这样

    QList<TrainSchedule> schedules = FileManager::readSchedules(SCHEDULE_FILE);
    schedules.append(schedule);
    FileManager::writeSchedules(SCHEDULE_FILE, schedules);

    // 清空输入框，以下的几个功能函数末尾原理同样如此
    ui->lineEditTrainNumber->clear();
    ui->lineEditDate->clear();
    ui->lineEditStartStation->clear();
    ui->lineEditEndStation->clear();
    ui->lineEditStartTime->clear();
    ui->lineEditEndTime->clear();
    ui->lineEditPrice->clear();
}

//以下函数为清空hchsk.dat中的所有信息，利于再次重新添加时刻信息
//修改后也必须要输入密码后才能进行该操作
void MainWindow::clearSchedulesButtonClicked()
{
    PasswordDialog passwordDialog(this);
    if (passwordDialog.exec() == QDialog::Accepted)
    {
        QString password = passwordDialog.getPassword();
        if (password == "123456") //设置密码
        {

            // 以下才是实现将hchsk.dat中的火车时刻信息全部清空，成空文件
            FileManager::clearFile(SCHEDULE_FILE);
            QMessageBox::information(this, "信息", "火车时刻信息已清空！");
        }
        else
        {
            QMessageBox::warning(this, "错误", "密码错误！");
        }
    }
}

//这个也是解决文件=的问题，又静态变量实现，注意文件名需换为scheduleFileName()
/*
QString MainWindow::scheduleFileName() {
    return "hchsk.dat";
}
*/

//用于解决票务的文件名ticket.dat
/*
QString MainWindow::ticketFileName() {
    return "tickets.dat";
}
*/


// 查询火车时刻信息
void MainWindow::searchScheduleButtonClicked()
{
    ui->scheduleTableWidget->clearContents();
    ui->scheduleTableWidget->setRowCount(0);  // 清空表格

    QString trainNumber = ui->lineEditTrainNumberQuery->text();
    QString endStation = ui->lineEditEndStationQuery->text();
    QString startStation = ui->lineEditStartStationQuery->text();
    QString endStationDate = ui->lineEditEndStationDateQuery->text();

    QList<TrainSchedule> schedules = FileManager::readSchedules(SCHEDULE_FILE);
    int row = 0;
    int state=0;
    for (const TrainSchedule& schedule : schedules)
    {
        if ((!trainNumber.isEmpty() && schedule.trainNumber == trainNumber) ||
            (!endStation.isEmpty() && schedule.endStation == endStation) ||
            (!startStation.isEmpty() && schedule.startStation == startStation) ||
            (!endStationDate.isEmpty() && schedule.endStation == endStationDate.split(",")[0] && schedule.date == endStationDate.split(",")[1]))
        {
            //用于显示搜索结果的tablewidget每一列与不同信息变量对应
            ui->scheduleTableWidget->insertRow(row);
            ui->scheduleTableWidget->setItem(row, 0, new QTableWidgetItem(schedule.trainNumber));
            ui->scheduleTableWidget->setItem(row, 1, new QTableWidgetItem(schedule.date));
            ui->scheduleTableWidget->setItem(row, 2, new QTableWidgetItem(schedule.startStation));
            ui->scheduleTableWidget->setItem(row, 3, new QTableWidgetItem(schedule.endStation));
            ui->scheduleTableWidget->setItem(row, 4, new QTableWidgetItem(schedule.startTime));
            ui->scheduleTableWidget->setItem(row, 5, new QTableWidgetItem(schedule.endTime));
            ui->scheduleTableWidget->setItem(row, 6, new QTableWidgetItem(schedule.price));
            row++;
            state=1;
        }
    }
    if(state==0)
    {
        QMessageBox::warning(this, "查询", "无该趟列车！");
        return;
    }
}

// 按终点统计车次数
void MainWindow::statisticsByEndStationButtonClicked()
{
    QMap<QString, int> endStationCount;
    QList<TrainSchedule> schedules = FileManager::readSchedules(SCHEDULE_FILE);
    for (const TrainSchedule& schedule : schedules)
    {
        endStationCount[schedule.endStation]++;
    }
    QString result;
    for (auto it = endStationCount.begin(); it != endStationCount.end(); ++it)
    {
        result += it.key() + ": " + QString::number(it.value()) + "\n";
    }
    ui->labelStatisticsResult->setText(result);
}

// 按起点统计车次数
void MainWindow::statisticsByStartStationButtonClicked()
{
    QMap<QString, int> startStationCount;
    QList<TrainSchedule> schedules = FileManager::readSchedules(SCHEDULE_FILE);
    for (const TrainSchedule& schedule : schedules)
    {
        startStationCount[schedule.startStation]++;
    }
    QString result;
    for (auto it = startStationCount.begin(); it != startStationCount.end(); ++it)
    {
        result += it.key() + ": " + QString::number(it.value()) + "\n";
    }
    ui->labelStatisticsResult->setText(result);
}

//实现弹出新窗口registerDialog
void MainWindow::registerButtonclicked()
{
    RegisterDialog registerDialog(this);
    registerDialog.exec();
}

// 实现订票功能（修改后，需验证密码）更新于6.8
//再次修改于2024.6.11（检查座位是否被选）
void MainWindow::bookTicketButtonClicked()
{
    QString passengerName = ui->lineEditPassengerName->text();
    QString trainNumber = ui->lineEditTrainNumberBook->text();
    QString seatNumber = ui->lineEditSeatNumber->text();
    QString password = ui->lineEditPasswordBook->text();

    QList<Ticket> tickets = TicketManager::readTickets(TICKET_FILE);//用于读取已存在的票务信息，方便下面检查座位是否可选

    //验证密码是否与姓名匹配，否则退出并弹窗
    if (!UserManager::validateUser(passengerName, password, "users.dat"))
    {
        QMessageBox::warning(this, "错误", "密码错误！");
        return;
    }

    //用于检查您所输入的座位是否被别人已经选了
    for (const Ticket& ticket : tickets) {
        if (ticket.trainNumber == trainNumber && ticket.seatNumber == seatNumber) {
            QMessageBox::warning(this, "订票失败", "该座位已经被预订！");
            return;
        }
    }

    QList<TrainSchedule> schedules = FileManager::readSchedules(SCHEDULE_FILE);
    bool found = false;

    for (const TrainSchedule& schedule : schedules)
    {
        if (schedule.trainNumber == trainNumber)
        {
            Ticket ticket;
            ticket.passengerName = passengerName;
            ticket.trainNumber = trainNumber;
            ticket.seatNumber = seatNumber;
            ticket.date = schedule.date;
            ticket.startStation = schedule.startStation;
            ticket.endStation = schedule.endStation;
            ticket.startTime = schedule.startTime;
            ticket.endTime = schedule.endTime;

            QList<Ticket> tickets = TicketManager::readTickets(TICKET_FILE);
            tickets.append(ticket);
            TicketManager::writeTickets(TICKET_FILE, tickets);

            QMessageBox::information(this, "订票", "订票成功！");
            found = true;
            break;
        }
    }

    if (!found)
    {
        QMessageBox::warning(this, "订票", "未找到该班次的信息！");
    }

    ui->lineEditPassengerName->clear();
    ui->lineEditTrainNumberBook->clear();
    ui->lineEditSeatNumber->clear();
    ui->lineEditPasswordBook->clear();
}

// 退票前一个版本，只能输入名字，退掉所有的票
//修改后，也需验证密码是否正确，并且可以退指定趟次的票了（更新于5.28）
void MainWindow::cancelTicketButtonClicked()
{
    QString passengerName = ui->lineEditCancelPassengerName->text();
    QString trainNumber = ui->lineEditCancelTrainNumber->text();
    QString password = ui->lineEditPasswordCancel->text();

    //验证密码是否与姓名匹配，否则退出并弹窗
    if (!UserManager::validateUser(passengerName, password, "users.dat"))
    {
        QMessageBox::warning(this, "错误", "密码错误！");
        return;
    }

    QList<Ticket> tickets = TicketManager::readTickets(TICKET_FILE);
    bool ticketFound = false;

    for (int i = 0; i < tickets.size(); ++i)
    {
        if (tickets[i].passengerName == passengerName && tickets[i].trainNumber == trainNumber)
        {
            tickets.removeAt(i);
            ticketFound = true;
            break;
        }
    }

    if (ticketFound)
    {
        TicketManager::writeTickets(TICKET_FILE, tickets);
        QMessageBox::information(this, "退票", "退票成功！");
    }
    else
    {
        QMessageBox::warning(this, "退票", "未找到指定班次的票！");
    }

    ui->lineEditCancelPassengerName->clear();
    ui->lineEditCancelTrainNumber->clear();
    ui->lineEditPasswordCancel->clear();//用于清空所有输入框的类容，方便下一次输入
}


// 改签前一个版本
//修改后也需验证密码（更新于6.8）
//再次修改于2024.6.11（检查座位是否被选）
void MainWindow::rescheduleTicketButtonClicked()
{
    QString passengerName = ui->lineEditReschedulePassengerName->text();
    QString oldTrainNumber = ui->lineEditOldTrainNumber->text();
    QString newTrainNumber = ui->lineEditRescheduleTrainNumber->text();
    QString newSeatNumber = ui->lineEditRescheduleSeatNumber->text();
    QString password = ui->lineEditPasswordReschedule->text();

    QList<Ticket> ticketa = TicketManager::readTickets(TICKET_FILE);//用于读取已存在的票务信息，方便下面检查座位是否可选

    //验证密码是否与姓名匹配，否则退出并弹窗
    if (!UserManager::validateUser(passengerName, password, "users.dat"))
    {
        QMessageBox::warning(this, "错误", "密码错误！");
        return;
    }

    //用于检查您所输入的座位是否被别人已经选了
    for (const Ticket& ticket : ticketa) {
        if (ticket.trainNumber == newTrainNumber && ticket.seatNumber == newSeatNumber) {
            QMessageBox::warning(this, "改签失败", "新座位已经被预订！");
            return;
        }
    }

    QList<TrainSchedule> schedules = FileManager::readSchedules(SCHEDULE_FILE);
    bool foundSchedule = false;

    QList<Ticket> tickets = TicketManager::readTickets(TICKET_FILE);
    for (int i = 0; i < tickets.size(); ++i)
    {
        if (tickets[i].passengerName == passengerName && tickets[i].trainNumber == oldTrainNumber)
        {
            for (const TrainSchedule& schedule : schedules)
            {
                if (schedule.trainNumber == newTrainNumber)
                {
                    tickets[i].trainNumber = newTrainNumber;
                    tickets[i].seatNumber = newSeatNumber;
                    tickets[i].date = schedule.date;
                    tickets[i].startStation = schedule.startStation;
                    tickets[i].endStation = schedule.endStation;
                    tickets[i].startTime = schedule.startTime;
                    tickets[i].endTime = schedule.endTime;

                    foundSchedule = true;
                    break;
                }
            }
            if (!foundSchedule)
            {
                QMessageBox::warning(this, "改签", "未找到新的班次信息！");
                return;
            }
            break;
        }
    }

    TicketManager::writeTickets(TICKET_FILE, tickets);

    ui->lineEditReschedulePassengerName->clear();
    ui->lineEditOldTrainNumber->clear();
    ui->lineEditRescheduleTrainNumber->clear();
    ui->lineEditRescheduleSeatNumber->clear();
    ui->lineEditPasswordReschedule->clear();
    QMessageBox::information(this, "改签", "改签成功！");
}

//查询票务信息
//前一个版本，查询信息只能显示对应的班次三个信息
//修改后，可以显示具体信息包括姓名，班次，对应的日期，起始地，到达地，起始时间，到达时间，座位号（更新于5.28）
//修改后必须验证密码正确（6.8）
void MainWindow::searchTicketsButtonClicked()
{
    QString passengerName = ui->lineEditPassengerName2->text();
    QString password = ui->lineEditPasswordQuery->text();

    //验证密码是否与姓名匹配，否则退出并弹窗
    if (!UserManager::validateUser(passengerName, password, "users.dat"))
    {
        QMessageBox::warning(this, "错误", "密码错误！");
        return;
    }

    QList<Ticket> tickets = TicketManager::readTickets(TICKET_FILE);
    ui->ticketTableWidget->setRowCount(0);  // 清空表格

    int row = 0;
    for (const Ticket& ticket : tickets)
    {
        if (ticket.passengerName == passengerName)
        {
            //对应的用于输出信息的tablewidget中每一列（所设置的）对应到ticket票务的每一个小类信息，以列表的形式
            ui->ticketTableWidget->insertRow(row);
            ui->ticketTableWidget->setItem(row, 0, new QTableWidgetItem(ticket.passengerName));
            ui->ticketTableWidget->setItem(row, 1, new QTableWidgetItem(ticket.trainNumber));
            ui->ticketTableWidget->setItem(row, 2, new QTableWidgetItem(ticket.date));
            ui->ticketTableWidget->setItem(row, 3, new QTableWidgetItem(ticket.startStation));
            ui->ticketTableWidget->setItem(row, 4, new QTableWidgetItem(ticket.endStation));
            ui->ticketTableWidget->setItem(row, 5, new QTableWidgetItem(ticket.startTime));
            ui->ticketTableWidget->setItem(row, 6, new QTableWidgetItem(ticket.endTime));
            ui->ticketTableWidget->setItem(row, 7, new QTableWidgetItem(ticket.seatNumber));
            row++;
        }
    }

    if (row == 0)
    {
        QMessageBox::information(this, "查询票务", "未找到该乘客的票务信息！");
    }
}

//用于清空查询时刻信息界面的输入框和列表
void MainWindow::clearQueryFields()
{
    ui->lineEditTrainNumberQuery->clear();
    ui->lineEditEndStationQuery->clear();
    ui->lineEditStartStationQuery->clear();
    ui->lineEditEndStationDateQuery->clear();

    ui->scheduleTableWidget->setRowCount(0);  // 对应的QTableWidget
}

// 清空查看票务页面的输入框和表格
void MainWindow::clearTicketFields()
{
    ui->lineEditPassengerName2->clear();
    ui->ticketTableWidget->setRowCount(0);
    ui->lineEditPasswordQuery->clear();
}










