//于2024.6.12连同RegisterDialog.cpp添加，该文件进行申明，用于新窗口来实现用户的注册，或者是老用户用来修改密码
//2024.6.13修改了代码的模板的规范性和注释的规范性
#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

#include <QDialog>

namespace Ui {
class RegisterDialog;//前向声明 Ui::RegisterDialog 类
}

class RegisterDialog : public QDialog
{
    Q_OBJECT

    public:
        explicit RegisterDialog(QWidget *parent = nullptr);//带参数构造
        ~RegisterDialog();//析构函数

    private slots:
        void onregisterButtonclicked();//槽函数，用于处理注册按钮的点击，与按钮进行连接

    private:
        Ui::RegisterDialog *ui;//指向 Ui::RegisterDialog 类的指针，用于获取该该ui上元件的信息；
};

#endif // REGISTERDIALOG_H
