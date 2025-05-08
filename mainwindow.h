//该头文件是用于实现系统各个功能类的声明（槽函数的声明）
//2024.5.27添加了clearSchedulesButtonClicked()来清理文件
//2024.5.28修改了searchScheduleButtonClicked，searchTicketsButtonClicked使输出结果用表表示按列输出
//2024.5.30修改了bookTicketButtonClicked()，rescheduleTicketButtonClicked()以解决读取不到信息问题
//最后修改日期 2024.6.1（添加了void clearQueryFields();void clearTicketFields();）
//更新2024.6.4 新增了onaddScheduleButtonclicked()函数用于密码验证在添加数据前
//2024.6.8更新，在订票，退票，改签，查询订单函数中增加了密码验证，防止他人查询篡改个人信息，当然也新增了元件用于密码输入在mainwindow.ui中
//2024.6.11修改了代码的模板的规范性和注释的规范性
//2024.6.12新增了registerButtonclicked()槽函数用于弹出另一个窗口来新建密码或者修改密码
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "trainschedule.h"
#include "ticket.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

    //实现主要功能的槽函数
    private slots:
        void searchScheduleButtonClicked();//查看现在的班次信息
        void addScheduleButtonClicked();//添加班次信息，这是在前面的做法
        void statisticsByEndStationButtonClicked();//按终点来统计班次数
        void statisticsByStartStationButtonClicked();//对应上面的按起点
        void bookTicketButtonClicked();//用于实现订票
        void cancelTicketButtonClicked();//退票
        void rescheduleTicketButtonClicked();//改签
        void clearSchedulesButtonClicked();  // 新增清空文件的槽函数（针对添加信息页面中清空班次信息库及文件里面的所有信息）
        void searchTicketsButtonClicked();//用于通过名字来搜索所买趟的具体信息（票务信息）
        void clearQueryFields();//查询时刻表页面和查看票务页面各添加一个按钮，来实现按了之后空格和表里面的信息清空，以便下一个人来查询
        void clearTicketFields();//同理如上
        void onaddScheduleButtonclicked();//用于实现密码验证后更新的的函数，里面内嵌addScheduleButtonClicked()
        void registerButtonclicked();//该槽函数连接的按钮被点击后弹出另一个窗口用于注册或修改密码

    private:
        Ui::MainWindow *ui;//用于指向ui设计页面中的不同元件
        std::vector<TrainSchedule> schedules;//对应班次信息的数组
        std::vector<Ticket> tickets;//同理如上，对应票务

        //这个是在解决mainwindow.h中const QString SCHEDULE_FILE = "hchsk.dat";警告问题时用，在此可以省略
        //static QString scheduleFileName();
        //static QString ticketFileName();  //同理是票务文件

};

#endif // MAINWINDOW_H


