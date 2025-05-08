//于passworddialog.h同时创建
//2024.6.11修改了代码的模板的规范性和注释的规范性
#include "Passworddialog.h"
#include "ui_PasswordDialog.h"  // 确保包含生成的头文件


PasswordDialog::PasswordDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PasswordDialog)
{
    ui->setupUi(this);
    ui->lineEditPassword->setEchoMode(QLineEdit::Password);//设置输入密码是.....的形式（不见具体数字）

    //将确认按钮连接到onconfirmButtonclicked函数，来实现确认验证密码
    connect(ui->confirmButton, &QPushButton::clicked, this, &PasswordDialog::onconfirmButtonclicked);
}


PasswordDialog::~PasswordDialog()
{
    delete ui;
}

QString PasswordDialog::getPassword() const //用于返回密码
{
    return password;
}

void PasswordDialog::onconfirmButtonclicked()
{
    password = ui->lineEditPassword->text();//用于获取输入的密码
    accept();
}

