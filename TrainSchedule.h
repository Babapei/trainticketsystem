//trainschedule类的声明和具体函数的定义，与ticket类对应类似，就不再解释
//2024.5.21创建
//2024.6.11修改了代码的模板的规范性和注释的规范性
#ifndef TRAINSCHEDULE_H
#define TRAINSCHEDULE_H

#include <QString>
#include <QStringList>
#include <QList>

class TrainSchedule
{
    public:
        QString trainNumber;//班次号
        QString date;//日期
        QString startStation;//始发地
        QString endStation;//目的地
        QString startTime;//发车时间
        QString endTime;//到达时间
        QString price;//票价

        //以下两个函数与ticket类中的其二函数类似（解释过）
        QString toString() const
        {
            return trainNumber + "," + date + "," + startStation + "," + endStation + "," + startTime + "," + endTime + "," + price;
        }

        //从一个格式化的字符串（通常是由上面函数生成的）中恢复TrainSchedule对象，从文件或文本中读取数据并将其转换为对象。
        static TrainSchedule fromString(const QString& str)
        {
            TrainSchedule schedule;
            QStringList parts = str.split(",");
            if (parts.size() == 7)
            {
                schedule.trainNumber = parts[0];
                schedule.date = parts[1];
                schedule.startStation = parts[2];
                schedule.endStation = parts[3];
                schedule.startTime = parts[4];
                schedule.endTime = parts[5];
                schedule.price = parts[6];
            }
            return schedule;
        }
};

#endif // TRAINSCHEDULE_H


