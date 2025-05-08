// 此头文件是用于针对票务信息（ticket类）与文件的关系，写入，提取，清空（ticket.dat文件来储存班次信息）
//类中的功能函数在类内定义了
//函数功能类似于filemanager.h中的各个功能函数，都是从文件中进行操作
//2024.5.25创建
//2024.6.11修改了代码的模板的规范性和注释的规范性
//2024.6.17增加了函数过程的注释
#ifndef TICKETMANAGER_H
#define TICKETMANAGER_H

#include <QFile>
#include <QTextStream>
#include <QList>
#include "Ticket.h"

class TicketManager
{
    public:

        //读取
        static QList<Ticket> readTickets(const QString& filePath)
        {
            QList<Ticket> tickets;//创建一个空的QList列表来存储读取的火车票信息
            QFile file(filePath);
            if (file.open(QIODevice::ReadOnly | QIODevice::Text)) //以只读和文本模式打开文件，如果文件成功打开，继续执行后续操作。
            {
                QTextStream in(&file); //创建一个QTextStream对象以便从文件中读取文本
                while (!in.atEnd())
                {
                    QString line = in.readLine();
                    if (!line.isEmpty())
                    {
                        tickets.append(Ticket::fromString(line));//使用Ticket类的静态方法fromString将读取的行转换为Ticket对象，并将其添加到tickets列表中
                    }
                }
                file.close();
            }
            return tickets;
        }

        //输入
        static void writeTickets(const QString& filePath, const QList<Ticket>& tickets)
        {
            QFile file(filePath);
            if (file.open(QIODevice::WriteOnly | QIODevice::Text))
            {
                QTextStream out(&file);
                for (const Ticket& ticket : tickets)//遍历tickets列表中的每个Ticket对象
                {
                    out << ticket.toString() << "\n";//使用Ticket类的toString方法将Ticket对象转换为字符串，并将其写入文件
                }
                file.close();
            }
        }

        //删去在订票修改后实现所有数据读写进ticket类所需的函数


};

#endif // TICKETMANAGER_H
