//用于启动程序的主函数
//2024.6.11修改了代码的模板的规范性和注释的规范性

#include "mainwindow.h"//对应设计的ui页面
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);// 创建应用程序对象
    MainWindow w;// 创建主窗口对象
    w.show();// 显示主窗口
    return a.exec();// 进入事件循环
}
