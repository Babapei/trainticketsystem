//于2024.6.12添加，用于新窗口来实现用户的注册，或者是老用户用来修改密码
//2024.6.13修改了代码的模板的规范性和注释的规范性
#include "RegisterDialog.h"
#include "ui_RegisterDialog.h"
#include "UserManager.h"
#include <QMessageBox>

RegisterDialog::RegisterDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);

    //将确认按钮连接到指定的槽函数上
    connect(ui->pushButton, &QPushButton::clicked, this, &RegisterDialog::onregisterButtonclicked);
}

RegisterDialog::~RegisterDialog()//析构
{
    delete ui;
}

//用于实现注册或者修改，包括从users.dat中写入新的或者修改旧的，同样的是"姓名","密码"的形式
void RegisterDialog::onregisterButtonclicked()
{
    QString username = ui->lineEditUsername->text();//从输入框中获取用户名
    QString password = ui->lineEditPassword->text();//获取密码

    if (username.isEmpty() || password.isEmpty())
    {
        QMessageBox::warning(this, "注册失败", "用户名和密码不能为空！");
        return;
    }

    if (UserManager::userExists(username))//通过判断用户信息文件中是否有该名字来进行不同的处理
    {
        UserManager::updatePassword(username, password);//在文件中修改该用户的密码
        QMessageBox::information(this, "修改密码", "密码修改成功！");
    }
    else
    {
        UserManager::addUser(username, password);//在文件中（users.dat)添加用户信息
        QMessageBox::information(this, "注册", "注册成功！");
    }

    //对两个输入框进行清空，方便下一次输入
    ui->lineEditUsername->clear();
    ui->lineEditPassword->clear();
    accept();//关闭对话框
}
