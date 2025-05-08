// 该文件是ticket类的声明
//包含了票务信息类，里面包含票务中所含各种信息的变量，以及对其的转化功能的函数
//2024.5.22新增
//2024.6.11修改了代码的模板的规范性和注释的规范性
#ifndef TICKET_H
#define TICKET_H

#include <QString>
#include <QStringList> // 添加这行
#include <QList>       // 添加这行

class Ticket {
    public:

        //所包含的变量，对应的信息（票务）
        QString passengerName;//乘客姓名
        QString trainNumber;//班次，于schedule中对应
        QString seatNumber;//座位号
        QString startStation;//始发地点
        QString endStation;//终点站
        QString startTime;//发车时间
        QString endTime;//到达时间
        QString date;//日期

        Ticket() {}

        //带参构造
        Ticket(const QString& passengerName, const QString& trainNumber, const QString& date,
               const QString& startStation, const QString& endStation, const QString& startTime,
               const QString& endTime,const QString& seatNumber)
            : passengerName(passengerName), trainNumber(trainNumber), date(date),
            startStation(startStation), endStation(endStation), startTime(startTime),
            endTime(endTime),seatNumber(seatNumber) {}

        //将对象的所有成员变量转换为一个字符串，并用逗号分隔，用来将对象的状态保存到文件或进行文本传输。
        QString toString() const
        {
            return passengerName + "," + trainNumber + "," + date + "," +
                   startStation + "," + endStation + "," + startTime + "," + endTime + "," + seatNumber;
        }

        //从一个格式化的字符串（通常是由上面函数生成的）中恢复Ticket对象，从文件或文本中读取数据并将其转换为对象。
        static Ticket fromString(const QString& str)
        {
            QStringList parts = str.split(",");
            return Ticket(parts[0], parts[1], parts[2], parts[3], parts[4], parts[5], parts[6],parts[7]);
        }
};

#endif // TICKET_H
