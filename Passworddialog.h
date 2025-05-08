//新增于2024.6.3
//同时添加了一个页面窗口，也就是对应的Pssworddialog.h
//实现在添加班次时刻信息前必须输入密码才能执行，也就是管理员才能执行
//实现该功能，这一行必须添加，不然会在其.cpp文件中会报错
//2024.6.11修改了代码的模板的规范性和注释的规范性
#ifndef PASSWORDDIALOG_H
#define PASSWORDDIALOG_H

#include <QDialog>

namespace Ui
{
    class PasswordDialog; //前向声明
}

class PasswordDialog : public QDialog
{
    Q_OBJECT

    public:
        explicit PasswordDialog(QWidget *parent = nullptr);
        ~PasswordDialog();
        QString getPassword() const;//用于返回获取密码

    private slots:
        void onconfirmButtonclicked();//用于确认来确认密码

    private:
        Ui::PasswordDialog *ui;
        QString password;//密码的变量
};

#endif // PASSWORDDIALOG_H


