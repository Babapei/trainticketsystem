/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tabWidgetPage1;
    QLineEdit *lineEditTrainNumber;
    QLineEdit *lineEditDate;
    QLineEdit *lineEditStartStation;
    QLineEdit *lineEditEndStation;
    QLineEdit *lineEditStartTime;
    QLineEdit *lineEditEndTime;
    QLabel *labelTrainNumber;
    QLabel *labelDate;
    QLabel *labelStartStation;
    QLabel *labelEndStation;
    QLabel *labelStartTime;
    QLabel *labelEndTime;
    QPushButton *addScheduleButton;
    QLabel *labelPrice;
    QLineEdit *lineEditPrice;
    QPushButton *clearSchedulesButton;
    QLabel *label_9;
    QLabel *label_19;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_26;
    QWidget *tabWidgetPage2;
    QLineEdit *lineEditTrainNumberQuery;
    QLineEdit *lineEditStartStationQuery;
    QLineEdit *lineEditEndStationQuery;
    QLineEdit *lineEditEndStationDateQuery;
    QLabel *labelTrainNumberQuery;
    QPushButton *searchScheduleButton;
    QTableWidget *scheduleTableWidget;
    QLabel *labelStartStationQuery;
    QLabel *labelEndStationQuery;
    QLabel *labelEndStationDateQuery;
    QPushButton *pushButtonClearQuery;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *tab;
    QLabel *label_4;
    QLineEdit *lineEditPassengerName2;
    QPushButton *searchTicketsButton;
    QTableWidget *ticketTableWidget;
    QPushButton *pushButtonClearTickets;
    QLabel *label_6;
    QLineEdit *lineEditPasswordQuery;
    QLabel *label_3;
    QWidget *tabWidgetPage3;
    QPushButton *statisticsButtonByEndStation;
    QLabel *labelStatisticsResult;
    QLabel *label_15;
    QLabel *label;
    QPushButton *statisticsButtonByStartStation;
    QLabel *label_20;
    QLabel *label_25;
    QWidget *tabWidgetPage4;
    QLabel *labelPassengerName;
    QLabel *labelTrainNumberBook;
    QLabel *labelSeatNumber;
    QLineEdit *lineEditPassengerName;
    QLineEdit *lineEditTrainNumberBook;
    QLineEdit *lineEditSeatNumber;
    QPushButton *bookTicketButton;
    QLabel *label_10;
    QLineEdit *lineEditPasswordBook;
    QPushButton *registerButton;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_16;
    QWidget *tabWidgetPage5;
    QLabel *labelCancelPassengerName;
    QLineEdit *lineEditCancelPassengerName;
    QPushButton *cancelTicketButton;
    QLineEdit *lineEditCancelTrainNumber;
    QLabel *label_5;
    QLabel *label_11;
    QLineEdit *lineEditPasswordCancel;
    QLabel *label_21;
    QLabel *label_22;
    QWidget *tabWidgetPage6;
    QLabel *labelReschedulePassengerName;
    QLabel *labelRescheduleTrainNumber;
    QLabel *labelRescheduleSeatNumber;
    QLineEdit *lineEditReschedulePassengerName;
    QLineEdit *lineEditRescheduleTrainNumber;
    QLineEdit *lineEditRescheduleSeatNumber;
    QPushButton *rescheduleTicketButton;
    QLineEdit *lineEditOldTrainNumber;
    QLabel *label_2;
    QLabel *label_12;
    QLineEdit *lineEditPasswordReschedule;
    QLabel *label_17;
    QLabel *label_18;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(877, 603);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(30, 50, 821, 461));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
"            border: 1px solid #dcdcdc;\n"
"            border-radius: 10px;\n"
"			background-color: #bdccff;\n"
"           \n"
"        }\n"
"        QTabWidget::tab-bar {\n"
"            alignment: center;\n"
"        }"));
        tabWidgetPage1 = new QWidget();
        tabWidgetPage1->setObjectName("tabWidgetPage1");
        lineEditTrainNumber = new QLineEdit(tabWidgetPage1);
        lineEditTrainNumber->setObjectName("lineEditTrainNumber");
        lineEditTrainNumber->setGeometry(QRect(140, 40, 113, 23));
        lineEditDate = new QLineEdit(tabWidgetPage1);
        lineEditDate->setObjectName("lineEditDate");
        lineEditDate->setGeometry(QRect(140, 80, 113, 23));
        lineEditStartStation = new QLineEdit(tabWidgetPage1);
        lineEditStartStation->setObjectName("lineEditStartStation");
        lineEditStartStation->setGeometry(QRect(140, 160, 113, 23));
        lineEditEndStation = new QLineEdit(tabWidgetPage1);
        lineEditEndStation->setObjectName("lineEditEndStation");
        lineEditEndStation->setGeometry(QRect(140, 200, 113, 23));
        lineEditStartTime = new QLineEdit(tabWidgetPage1);
        lineEditStartTime->setObjectName("lineEditStartTime");
        lineEditStartTime->setGeometry(QRect(140, 240, 113, 23));
        lineEditEndTime = new QLineEdit(tabWidgetPage1);
        lineEditEndTime->setObjectName("lineEditEndTime");
        lineEditEndTime->setGeometry(QRect(140, 280, 113, 23));
        labelTrainNumber = new QLabel(tabWidgetPage1);
        labelTrainNumber->setObjectName("labelTrainNumber");
        labelTrainNumber->setGeometry(QRect(70, 40, 54, 21));
        labelDate = new QLabel(tabWidgetPage1);
        labelDate->setObjectName("labelDate");
        labelDate->setGeometry(QRect(70, 80, 54, 21));
        labelStartStation = new QLabel(tabWidgetPage1);
        labelStartStation->setObjectName("labelStartStation");
        labelStartStation->setGeometry(QRect(70, 160, 54, 21));
        labelEndStation = new QLabel(tabWidgetPage1);
        labelEndStation->setObjectName("labelEndStation");
        labelEndStation->setGeometry(QRect(70, 200, 54, 21));
        labelStartTime = new QLabel(tabWidgetPage1);
        labelStartTime->setObjectName("labelStartTime");
        labelStartTime->setGeometry(QRect(70, 240, 61, 21));
        labelEndTime = new QLabel(tabWidgetPage1);
        labelEndTime->setObjectName("labelEndTime");
        labelEndTime->setGeometry(QRect(70, 280, 71, 21));
        addScheduleButton = new QPushButton(tabWidgetPage1);
        addScheduleButton->setObjectName("addScheduleButton");
        addScheduleButton->setGeometry(QRect(410, 200, 101, 51));
        addScheduleButton->setStyleSheet(QString::fromUtf8("background-color: #5cb85c;\n"
"            border: none;\n"
"            color: white;\n"
"            padding: 10px 20px;\n"
"            text-align: center;\n"
"            text-decoration: none;\n"
"            display: inline-block;\n"
"            font-size: 16px;\n"
"            margin: 4px 2px;\n"
"            transition-duration: 0.4s;\n"
"            cursor: pointer;\n"
"            border-radius: 10px;"));
        labelPrice = new QLabel(tabWidgetPage1);
        labelPrice->setObjectName("labelPrice");
        labelPrice->setGeometry(QRect(70, 320, 54, 21));
        lineEditPrice = new QLineEdit(tabWidgetPage1);
        lineEditPrice->setObjectName("lineEditPrice");
        lineEditPrice->setGeometry(QRect(140, 320, 113, 23));
        clearSchedulesButton = new QPushButton(tabWidgetPage1);
        clearSchedulesButton->setObjectName("clearSchedulesButton");
        clearSchedulesButton->setGeometry(QRect(410, 260, 101, 51));
        clearSchedulesButton->setStyleSheet(QString::fromUtf8("background-color: red;  \n"
"            border: none;\n"
"            color: white;\n"
"            padding: 10px 20px;\n"
"            text-align: center;\n"
"            text-decoration: none;\n"
"            display: inline-block;\n"
"            font-size: 16px;\n"
"            margin: 4px 2px;\n"
"            transition-duration: 0.4s;\n"
"            cursor: pointer;\n"
"            border-radius: 10px;"));
        label_9 = new QLabel(tabWidgetPage1);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(410, 170, 281, 16));
        label_19 = new QLabel(tabWidgetPage1);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(680, 340, 131, 81));
        label_19->setStyleSheet(QString::fromUtf8("image: url(:/\345\260\201\351\235\242.png);"));
        label_23 = new QLabel(tabWidgetPage1);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(270, 240, 81, 21));
        label_24 = new QLabel(tabWidgetPage1);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(270, 280, 81, 21));
        label_26 = new QLabel(tabWidgetPage1);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(530, 280, 201, 16));
        tabWidget->addTab(tabWidgetPage1, QString());
        tabWidgetPage2 = new QWidget();
        tabWidgetPage2->setObjectName("tabWidgetPage2");
        lineEditTrainNumberQuery = new QLineEdit(tabWidgetPage2);
        lineEditTrainNumberQuery->setObjectName("lineEditTrainNumberQuery");
        lineEditTrainNumberQuery->setGeometry(QRect(120, 40, 113, 23));
        lineEditStartStationQuery = new QLineEdit(tabWidgetPage2);
        lineEditStartStationQuery->setObjectName("lineEditStartStationQuery");
        lineEditStartStationQuery->setGeometry(QRect(120, 80, 113, 23));
        lineEditEndStationQuery = new QLineEdit(tabWidgetPage2);
        lineEditEndStationQuery->setObjectName("lineEditEndStationQuery");
        lineEditEndStationQuery->setGeometry(QRect(120, 120, 113, 23));
        lineEditEndStationDateQuery = new QLineEdit(tabWidgetPage2);
        lineEditEndStationDateQuery->setObjectName("lineEditEndStationDateQuery");
        lineEditEndStationDateQuery->setGeometry(QRect(120, 160, 113, 23));
        labelTrainNumberQuery = new QLabel(tabWidgetPage2);
        labelTrainNumberQuery->setObjectName("labelTrainNumberQuery");
        labelTrainNumberQuery->setGeometry(QRect(40, 40, 54, 21));
        searchScheduleButton = new QPushButton(tabWidgetPage2);
        searchScheduleButton->setObjectName("searchScheduleButton");
        searchScheduleButton->setGeometry(QRect(280, 80, 101, 51));
        searchScheduleButton->setStyleSheet(QString::fromUtf8("background-color: #5cb85c;\n"
"            border: none;\n"
"            color: white;\n"
"            padding: 10px 20px;\n"
"            text-align: center;\n"
"            text-decoration: none;\n"
"            display: inline-block;\n"
"            font-size: 16px;\n"
"            margin: 4px 2px;\n"
"            transition-duration: 0.4s;\n"
"            cursor: pointer;\n"
"            border-radius: 10px;"));
        scheduleTableWidget = new QTableWidget(tabWidgetPage2);
        if (scheduleTableWidget->columnCount() < 7)
            scheduleTableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        scheduleTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        scheduleTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        scheduleTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        scheduleTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        scheduleTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        scheduleTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        scheduleTableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        scheduleTableWidget->setObjectName("scheduleTableWidget");
        scheduleTableWidget->setGeometry(QRect(50, 230, 711, 191));
        scheduleTableWidget->setStyleSheet(QString::fromUtf8("border: 1px solid #4a4a4a;\n"
"border-radius: 10px;\n"
"gridline-color: #4a4a4a;\n"
"           \n"
"            "));
        labelStartStationQuery = new QLabel(tabWidgetPage2);
        labelStartStationQuery->setObjectName("labelStartStationQuery");
        labelStartStationQuery->setGeometry(QRect(40, 80, 54, 21));
        labelEndStationQuery = new QLabel(tabWidgetPage2);
        labelEndStationQuery->setObjectName("labelEndStationQuery");
        labelEndStationQuery->setGeometry(QRect(40, 120, 54, 21));
        labelEndStationDateQuery = new QLabel(tabWidgetPage2);
        labelEndStationDateQuery->setObjectName("labelEndStationDateQuery");
        labelEndStationDateQuery->setGeometry(QRect(40, 160, 81, 21));
        pushButtonClearQuery = new QPushButton(tabWidgetPage2);
        pushButtonClearQuery->setObjectName("pushButtonClearQuery");
        pushButtonClearQuery->setGeometry(QRect(510, 100, 80, 24));
        label_7 = new QLabel(tabWidgetPage2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(510, 70, 211, 16));
        label_8 = new QLabel(tabWidgetPage2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(120, 190, 101, 16));
        tabWidget->addTab(tabWidgetPage2, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 50, 71, 21));
        lineEditPassengerName2 = new QLineEdit(tab);
        lineEditPassengerName2->setObjectName("lineEditPassengerName2");
        lineEditPassengerName2->setGeometry(QRect(150, 42, 113, 31));
        lineEditPassengerName2->setStyleSheet(QString::fromUtf8("border: 2px solid #dcdcdc;\n"
"            border-radius: 10px;\n"
"            padding: 5px;"));
        searchTicketsButton = new QPushButton(tab);
        searchTicketsButton->setObjectName("searchTicketsButton");
        searchTicketsButton->setGeometry(QRect(300, 50, 101, 51));
        searchTicketsButton->setStyleSheet(QString::fromUtf8("background-color: #5cb85c;\n"
"            border: none;\n"
"            color: white;\n"
"            padding: 10px 20px;\n"
"            text-align: center;\n"
"            text-decoration: none;\n"
"            display: inline-block;\n"
"            font-size: 16px;\n"
"            margin: 4px 2px;\n"
"            transition-duration: 0.4s;\n"
"            cursor: pointer;\n"
"            border-radius: 10px;"));
        ticketTableWidget = new QTableWidget(tab);
        if (ticketTableWidget->columnCount() < 8)
            ticketTableWidget->setColumnCount(8);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("go-top")));
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setIcon(icon);
        ticketTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        ticketTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        ticketTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        ticketTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        ticketTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        ticketTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        ticketTableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        ticketTableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem14);
        ticketTableWidget->setObjectName("ticketTableWidget");
        ticketTableWidget->setGeometry(QRect(10, 150, 801, 241));
        ticketTableWidget->setStyleSheet(QString::fromUtf8("border: 1px solid #dcdcdc;\n"
"border-radius: 10px;\n"
"gridline-color: #dcdcdc;"));
        pushButtonClearTickets = new QPushButton(tab);
        pushButtonClearTickets->setObjectName("pushButtonClearTickets");
        pushButtonClearTickets->setGeometry(QRect(530, 50, 80, 24));
        label_6 = new QLabel(tab);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(530, 30, 201, 16));
        lineEditPasswordQuery = new QLineEdit(tab);
        lineEditPasswordQuery->setObjectName("lineEditPasswordQuery");
        lineEditPasswordQuery->setGeometry(QRect(150, 90, 113, 31));
        lineEditPasswordQuery->setStyleSheet(QString::fromUtf8("border: 2px solid #dcdcdc;\n"
"            border-radius: 10px;\n"
"            padding: 5px;"));
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 90, 54, 31));
        tabWidget->addTab(tab, QString());
        tabWidgetPage3 = new QWidget();
        tabWidgetPage3->setObjectName("tabWidgetPage3");
        statisticsButtonByEndStation = new QPushButton(tabWidgetPage3);
        statisticsButtonByEndStation->setObjectName("statisticsButtonByEndStation");
        statisticsButtonByEndStation->setGeometry(QRect(200, 80, 80, 24));
        labelStatisticsResult = new QLabel(tabWidgetPage3);
        labelStatisticsResult->setObjectName("labelStatisticsResult");
        labelStatisticsResult->setGeometry(QRect(80, 190, 151, 111));
        labelStatisticsResult->setStyleSheet(QString::fromUtf8("border: 1px solid #dcdcdc;\n"
"            border-radius: 10px;\n"
"            padding: 5px;\n"
"            background-color: #7d7d7d;"));
        label_15 = new QLabel(tabWidgetPage3);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(80, 80, 81, 21));
        label = new QLabel(tabWidgetPage3);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 130, 81, 21));
        statisticsButtonByStartStation = new QPushButton(tabWidgetPage3);
        statisticsButtonByStartStation->setObjectName("statisticsButtonByStartStation");
        statisticsButtonByStartStation->setGeometry(QRect(200, 130, 80, 24));
        statisticsButtonByStartStation->setStyleSheet(QString::fromUtf8("font: 800 9pt \"Rockwell Extra Bold\";"));
        label_20 = new QLabel(tabWidgetPage3);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(630, 370, 181, 51));
        label_20->setStyleSheet(QString::fromUtf8("image: url(:/insert3.jpg);"));
        label_25 = new QLabel(tabWidgetPage3);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(320, 80, 231, 16));
        tabWidget->addTab(tabWidgetPage3, QString());
        tabWidgetPage4 = new QWidget();
        tabWidgetPage4->setObjectName("tabWidgetPage4");
        labelPassengerName = new QLabel(tabWidgetPage4);
        labelPassengerName->setObjectName("labelPassengerName");
        labelPassengerName->setGeometry(QRect(60, 30, 71, 21));
        labelTrainNumberBook = new QLabel(tabWidgetPage4);
        labelTrainNumberBook->setObjectName("labelTrainNumberBook");
        labelTrainNumberBook->setGeometry(QRect(60, 80, 54, 21));
        labelSeatNumber = new QLabel(tabWidgetPage4);
        labelSeatNumber->setObjectName("labelSeatNumber");
        labelSeatNumber->setGeometry(QRect(60, 130, 54, 21));
        lineEditPassengerName = new QLineEdit(tabWidgetPage4);
        lineEditPassengerName->setObjectName("lineEditPassengerName");
        lineEditPassengerName->setGeometry(QRect(140, 30, 113, 23));
        lineEditTrainNumberBook = new QLineEdit(tabWidgetPage4);
        lineEditTrainNumberBook->setObjectName("lineEditTrainNumberBook");
        lineEditTrainNumberBook->setGeometry(QRect(140, 80, 113, 23));
        lineEditSeatNumber = new QLineEdit(tabWidgetPage4);
        lineEditSeatNumber->setObjectName("lineEditSeatNumber");
        lineEditSeatNumber->setGeometry(QRect(140, 130, 113, 23));
        bookTicketButton = new QPushButton(tabWidgetPage4);
        bookTicketButton->setObjectName("bookTicketButton");
        bookTicketButton->setGeometry(QRect(290, 90, 111, 51));
        bookTicketButton->setStyleSheet(QString::fromUtf8("background-color: #5cb85c;\n"
"            border: none;\n"
"            color: white;\n"
"            padding: 10px 20px;\n"
"            text-align: center;\n"
"            text-decoration: none;\n"
"            display: inline-block;\n"
"            font-size: 16px;\n"
"            margin: 4px 2px;\n"
"            transition-duration: 0.4s;\n"
"            cursor: pointer;\n"
"            border-radius: 10px;"));
        label_10 = new QLabel(tabWidgetPage4);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(60, 180, 54, 21));
        lineEditPasswordBook = new QLineEdit(tabWidgetPage4);
        lineEditPasswordBook->setObjectName("lineEditPasswordBook");
        lineEditPasswordBook->setGeometry(QRect(140, 180, 113, 23));
        registerButton = new QPushButton(tabWidgetPage4);
        registerButton->setObjectName("registerButton");
        registerButton->setGeometry(QRect(570, 120, 80, 24));
        label_13 = new QLabel(tabWidgetPage4);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(500, 80, 241, 16));
        label_14 = new QLabel(tabWidgetPage4);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(40, 230, 281, 91));
        label_14->setStyleSheet(QString::fromUtf8("image: url(:/insert2.jpg);"));
        label_16 = new QLabel(tabWidgetPage4);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(450, 230, 331, 91));
        label_16->setStyleSheet(QString::fromUtf8("image: url(:/insert1.jpg);"));
        tabWidget->addTab(tabWidgetPage4, QString());
        tabWidgetPage5 = new QWidget();
        tabWidgetPage5->setObjectName("tabWidgetPage5");
        labelCancelPassengerName = new QLabel(tabWidgetPage5);
        labelCancelPassengerName->setObjectName("labelCancelPassengerName");
        labelCancelPassengerName->setGeometry(QRect(80, 70, 71, 21));
        lineEditCancelPassengerName = new QLineEdit(tabWidgetPage5);
        lineEditCancelPassengerName->setObjectName("lineEditCancelPassengerName");
        lineEditCancelPassengerName->setGeometry(QRect(180, 70, 113, 23));
        cancelTicketButton = new QPushButton(tabWidgetPage5);
        cancelTicketButton->setObjectName("cancelTicketButton");
        cancelTicketButton->setGeometry(QRect(320, 110, 111, 51));
        cancelTicketButton->setStyleSheet(QString::fromUtf8("background-color: #5cb85c;\n"
"            border: none;\n"
"            color: white;\n"
"            padding: 10px 20px;\n"
"            text-align: center;\n"
"            text-decoration: none;\n"
"            display: inline-block;\n"
"            font-size: 16px;\n"
"            margin: 4px 2px;\n"
"            transition-duration: 0.4s;\n"
"            cursor: pointer;\n"
"            border-radius: 10px;"));
        lineEditCancelTrainNumber = new QLineEdit(tabWidgetPage5);
        lineEditCancelTrainNumber->setObjectName("lineEditCancelTrainNumber");
        lineEditCancelTrainNumber->setGeometry(QRect(180, 120, 113, 23));
        label_5 = new QLabel(tabWidgetPage5);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(80, 120, 71, 21));
        label_11 = new QLabel(tabWidgetPage5);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(80, 170, 71, 21));
        lineEditPasswordCancel = new QLineEdit(tabWidgetPage5);
        lineEditPasswordCancel->setObjectName("lineEditPasswordCancel");
        lineEditPasswordCancel->setGeometry(QRect(180, 170, 113, 23));
        label_21 = new QLabel(tabWidgetPage5);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(70, 240, 281, 91));
        label_21->setStyleSheet(QString::fromUtf8("image: url(:/insert2.jpg);"));
        label_22 = new QLabel(tabWidgetPage5);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(680, 340, 131, 81));
        label_22->setStyleSheet(QString::fromUtf8("image: url(:/\345\260\201\351\235\242.png);"));
        tabWidget->addTab(tabWidgetPage5, QString());
        tabWidgetPage6 = new QWidget();
        tabWidgetPage6->setObjectName("tabWidgetPage6");
        labelReschedulePassengerName = new QLabel(tabWidgetPage6);
        labelReschedulePassengerName->setObjectName("labelReschedulePassengerName");
        labelReschedulePassengerName->setGeometry(QRect(60, 30, 81, 31));
        labelReschedulePassengerName->setStyleSheet(QString::fromUtf8("border: 1px solid #dcdcdc;\n"
"            border-radius: 10px;\n"
"            padding: 5px;\n"
"            background-color: #f8f8f8;"));
        labelRescheduleTrainNumber = new QLabel(tabWidgetPage6);
        labelRescheduleTrainNumber->setObjectName("labelRescheduleTrainNumber");
        labelRescheduleTrainNumber->setGeometry(QRect(73, 140, 61, 20));
        labelRescheduleSeatNumber = new QLabel(tabWidgetPage6);
        labelRescheduleSeatNumber->setObjectName("labelRescheduleSeatNumber");
        labelRescheduleSeatNumber->setGeometry(QRect(73, 190, 61, 20));
        lineEditReschedulePassengerName = new QLineEdit(tabWidgetPage6);
        lineEditReschedulePassengerName->setObjectName("lineEditReschedulePassengerName");
        lineEditReschedulePassengerName->setGeometry(QRect(150, 30, 111, 31));
        lineEditReschedulePassengerName->setStyleSheet(QString::fromUtf8("border: 2px solid #dcdcdc;\n"
"border-radius: 10px;\n"
"padding: 5px;"));
        lineEditRescheduleTrainNumber = new QLineEdit(tabWidgetPage6);
        lineEditRescheduleTrainNumber->setObjectName("lineEditRescheduleTrainNumber");
        lineEditRescheduleTrainNumber->setGeometry(QRect(150, 130, 113, 31));
        lineEditRescheduleTrainNumber->setStyleSheet(QString::fromUtf8("border: 2px solid #dcdcdc;\n"
"border-radius: 10px;\n"
"padding: 5px;"));
        lineEditRescheduleSeatNumber = new QLineEdit(tabWidgetPage6);
        lineEditRescheduleSeatNumber->setObjectName("lineEditRescheduleSeatNumber");
        lineEditRescheduleSeatNumber->setGeometry(QRect(150, 180, 113, 31));
        lineEditRescheduleSeatNumber->setStyleSheet(QString::fromUtf8("border: 2px solid #dcdcdc;\n"
"border-radius: 10px;\n"
"padding: 5px;"));
        rescheduleTicketButton = new QPushButton(tabWidgetPage6);
        rescheduleTicketButton->setObjectName("rescheduleTicketButton");
        rescheduleTicketButton->setGeometry(QRect(320, 120, 81, 51));
        rescheduleTicketButton->setStyleSheet(QString::fromUtf8("background-color: #5cb85c;\n"
"            border: none;\n"
"            color: white;\n"
"            padding: 10px 20px;\n"
"            text-align: center;\n"
"            text-decoration: none;\n"
"            display: inline-block;\n"
"            font-size: 16px;\n"
"            margin: 4px 2px;\n"
"            transition-duration: 0.4s;\n"
"            cursor: pointer;\n"
"            border-radius: 10px;"));
        lineEditOldTrainNumber = new QLineEdit(tabWidgetPage6);
        lineEditOldTrainNumber->setObjectName("lineEditOldTrainNumber");
        lineEditOldTrainNumber->setGeometry(QRect(150, 80, 113, 31));
        lineEditOldTrainNumber->setStyleSheet(QString::fromUtf8("border: 2px solid #dcdcdc;\n"
"border-radius: 10px;\n"
"padding: 5px;\n"
""));
        label_2 = new QLabel(tabWidgetPage6);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(73, 90, 61, 21));
        label_12 = new QLabel(tabWidgetPage6);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(73, 240, 61, 21));
        lineEditPasswordReschedule = new QLineEdit(tabWidgetPage6);
        lineEditPasswordReschedule->setObjectName("lineEditPasswordReschedule");
        lineEditPasswordReschedule->setGeometry(QRect(150, 230, 113, 31));
        lineEditPasswordReschedule->setStyleSheet(QString::fromUtf8("border: 2px solid #dcdcdc;\n"
"border-radius: 10px;\n"
"padding: 5px;"));
        label_17 = new QLabel(tabWidgetPage6);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(80, 280, 281, 91));
        label_17->setStyleSheet(QString::fromUtf8("image: url(:/insert2.jpg);"));
        label_18 = new QLabel(tabWidgetPage6);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(430, 280, 331, 91));
        label_18->setStyleSheet(QString::fromUtf8("image: url(:/insert1.jpg);"));
        tabWidget->addTab(tabWidgetPage6, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 877, 21));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\347\201\253\350\275\246\347\245\250\345\212\241\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        labelTrainNumber->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\350\275\246\346\254\241</span></p></body></html>", nullptr));
        labelDate->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\346\227\245\346\234\237</span></p></body></html>", nullptr));
        labelStartStation->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\350\265\267\347\202\271</span></p></body></html>", nullptr));
        labelEndStation->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\347\273\210\347\202\271</span></p></body></html>", nullptr));
        labelStartTime->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\345\274\200\350\275\246\346\227\266\351\227\264</span></p></body></html>", nullptr));
        labelEndTime->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\345\210\260\350\276\276\346\227\266\351\227\264</span></p></body></html>", nullptr));
        addScheduleButton->setText(QCoreApplication::translate("MainWindow", "\346\217\220\344\272\244", nullptr));
        labelPrice->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\347\245\250\344\273\267</span></p></body></html>", nullptr));
        clearSchedulesButton->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700; color:#aa0000;\">\345\217\252\346\234\211\347\256\241\347\220\206\345\221\230\346\211\215\350\203\275\350\203\275\350\277\233\350\241\214\350\257\245\346\223\215\344\275\234\357\274\214\345\234\250\347\202\271\345\207\273\345\220\216\351\234\200\351\252\214\350\257\201\345\257\206\347\240\201</span></p></body></html>", nullptr));
        label_19->setText(QString());
        label_23->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">\350\257\267\347\224\250\344\270\255\346\226\207\345\206\222\345\217\267</span></p></body></html>", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">\350\257\267\347\224\250\344\270\255\346\226\207\345\206\222\345\217\267</span></p></body></html>", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">\346\263\250\357\274\232\346\270\205\347\251\272\345\257\271\345\272\224\345\202\250\345\255\230\346\227\266\345\210\273\344\277\241\346\201\257\346\226\207\344\273\266\345\206\205\345\256\271</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage1), QCoreApplication::translate("MainWindow", "\345\275\225\345\205\245\347\201\253\350\275\246\346\227\266\345\210\273\344\277\241\346\201\257", nullptr));
        labelTrainNumberQuery->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\350\275\246\346\254\241</span></p></body></html>", nullptr));
        searchScheduleButton->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem = scheduleTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\347\217\255\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = scheduleTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = scheduleTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\345\207\272\345\217\221\345\234\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = scheduleTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\345\210\260\350\276\276\345\234\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = scheduleTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\345\207\272\345\217\221\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = scheduleTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\345\210\260\350\276\276\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = scheduleTableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "\347\245\250\344\273\267", nullptr));
        labelStartStationQuery->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\350\265\267\347\202\271</span></p></body></html>", nullptr));
        labelEndStationQuery->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\347\273\210\347\202\271</span></p></body></html>", nullptr));
        labelEndStationDateQuery->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\347\273\210\347\202\271\345\222\214\346\227\245\346\234\237</span></p></body></html>", nullptr));
        pushButtonClearQuery->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700; color:#aa0000;\">\350\257\267\345\234\250\346\237\245\347\234\213\345\256\214\345\220\216\346\270\205\347\251\272\344\273\245\344\276\277\344\273\226\344\272\272\345\206\215\346\254\241\346\237\245\347\234\213</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#aa00ff;\">\344\275\277\347\224\250\350\213\261\346\226\207 (,) \351\232\224\345\274\200</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage2), QCoreApplication::translate("MainWindow", "\347\217\255\346\254\241\346\237\245\350\257\242", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\344\271\230\345\256\242\345\247\223\345\220\215</span></p></body></html>", nullptr));
        searchTicketsButton->setText(QCoreApplication::translate("MainWindow", "\347\241\256\350\256\244", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = ticketTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "\344\271\230\345\256\242\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = ticketTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "\347\217\255\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = ticketTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = ticketTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "\350\265\267\345\247\213\347\253\231", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = ticketTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "\347\273\210\347\202\271\347\253\231", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = ticketTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "\345\217\221\350\275\246\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = ticketTableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "\345\210\260\350\276\276\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = ticketTableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "\345\272\247\344\275\215\345\217\267", nullptr));
        pushButtonClearTickets->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700; color:#aa0000;\">\350\257\267\345\234\250\346\237\245\347\234\213\345\256\214\345\220\216\346\270\205\347\251\272\344\273\245\344\276\277\344\273\226\344\272\272\345\206\215\346\254\241\346\237\245\347\234\213</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\345\257\206\347\240\201</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\350\256\242\345\215\225\346\237\245\350\257\242", nullptr));
        statisticsButtonByEndStation->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251", nullptr));
        labelStatisticsResult->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#969696;\">\345\234\250\346\255\244\344\275\215\347\275\256\346\230\276\347\244\272</span></p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\346\214\211\347\273\210\347\202\271\347\273\237\350\256\241</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\346\214\211\350\265\267\347\202\271\347\273\237\350\256\241</span></p></body></html>", nullptr));
        statisticsButtonByStartStation->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251", nullptr));
        label_20->setText(QString());
        label_25->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700; color:#aa0000;\">\346\263\250\357\274\232\345\210\206\345\210\253\346\230\276\347\244\272\345\220\204\347\253\231\345\207\272\345\217\221\347\232\204\350\266\237\346\225\260\346\210\226\345\210\260\350\276\276\347\232\204\350\266\237\346\225\260</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage3), QCoreApplication::translate("MainWindow", "\347\273\237\350\256\241\347\201\253\350\275\246\350\275\246\346\254\241", nullptr));
        labelPassengerName->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\344\271\230\345\256\242\345\247\223\345\220\215</span></p></body></html>", nullptr));
        labelTrainNumberBook->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\350\275\246\346\254\241</span></p></body></html>", nullptr));
        labelSeatNumber->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\345\272\247\344\275\215\345\217\267</span></p></body></html>", nullptr));
        bookTicketButton->setText(QCoreApplication::translate("MainWindow", "\347\241\256\350\256\244", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\345\257\206\347\240\201</span></p></body></html>", nullptr));
        registerButton->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214\346\210\226\344\277\256\346\224\271", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700; color:#aa0000;\">\350\213\245\346\202\250\350\277\230\346\262\241\346\234\211\350\264\246\346\210\267\357\274\214\346\210\226\350\200\205\346\203\263\344\277\256\346\224\271\345\257\206\347\240\201\357\274\214\350\257\267\347\202\271\345\207\273</span></p></body></html>", nullptr));
        label_14->setText(QString());
        label_16->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage4), QCoreApplication::translate("MainWindow", "\350\256\242\347\245\250", nullptr));
        labelCancelPassengerName->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\344\271\230\345\256\242\345\247\223\345\220\215</span></p></body></html>", nullptr));
        cancelTicketButton->setText(QCoreApplication::translate("MainWindow", "\347\241\256\350\256\244", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\351\200\211\346\213\251\347\217\255\346\254\241</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\345\257\206\347\240\201\351\252\214\350\257\201</span></p></body></html>", nullptr));
        label_21->setText(QString());
        label_22->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage5), QCoreApplication::translate("MainWindow", "\351\200\200\347\245\250", nullptr));
        labelReschedulePassengerName->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; color:#550000;\">\344\271\230\345\256\242\345\247\223\345\220\215</span></p></body></html>", nullptr));
        labelRescheduleTrainNumber->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\346\226\260\350\275\246\346\254\241</span></p></body></html>", nullptr));
        labelRescheduleSeatNumber->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\346\226\260\345\272\247\344\275\215\345\217\267</span></p></body></html>", nullptr));
        rescheduleTicketButton->setText(QCoreApplication::translate("MainWindow", "\347\241\256\350\256\244", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\346\227\247\350\275\246\346\254\241</span></p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\345\257\206\347\240\201\351\252\214\350\257\201</span></p></body></html>", nullptr));
        label_17->setText(QString());
        label_18->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage6), QCoreApplication::translate("MainWindow", "\346\224\271\347\255\276", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\347\201\253\350\275\246\347\245\250\345\212\241\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
