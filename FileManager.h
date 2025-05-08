// 此头文件是用于针对班次信息（trainschedule类）与文件的关系，写入，提取，清空（hchsk.dat文件来储存班次信息）
//类的功能函数在类内定义了
//2024.5.23
//2024.6.11修改了代码排版规范和注释的规范
#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <QFile>
#include <QTextStream>
#include "TrainSchedule.h"


class FileManager
{
public:

    //读取时刻信息
    static QList<TrainSchedule> readSchedules(const QString& filename)
    {
        QList<TrainSchedule> schedules;//创建一个空的QList列表来存储读取的火车车次信息
        QFile file(filename);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text))//以只读和文本模式打开文件，如果文件成功打开，继续执行后续操作。
        {
            QTextStream in(&file);//创建一个QTextStream对象以便从文件中读取文本
            while (!in.atEnd())//进行循环历遍整个文档，下面的函数也是类似该结构
            {
                QString line = in.readLine();
                TrainSchedule schedule = TrainSchedule::fromString(line);
                schedules.append(schedule);//使用TrainSchedule类的静态方法fromString将读取的行转换为TrainSchedule对象，并将其添加到schedules列表中
            }
            file.close();
        }
        return schedules;
    }

    //将时刻信息写入到指定文件中也就是hchsk.dat中
    static void writeSchedules(const QString& filePath, const QList<TrainSchedule>& schedules)
    {
        QFile file(filePath);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            QTextStream out(&file);
            for (const TrainSchedule& schedule : schedules)
            {
                out << schedule.toString() << "\n";//使用TrainSchedule类的toString方法将TrainSchedule对象转换为字符串，并将其写入文件
            }
            file.close();
        }
    }

    //清理，将文件中的所有信息清空，在mainwindow.cpp中实现
    static void clearFile(const QString& fileName)
    {
        QFile file(fileName);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text))//以只读和文本模式打开文件，如果文件成功打开，继续执行后续操作。
        {
            file.resize(0);  // 清空文件内容
            file.close();//将文件关闭
        }
        else
        {
            qWarning("无法清理");
        }
    }

};

#endif // FILEMANAGER_H
