//于20224.6.8新增，用于实现在订票改签，退票，查询信息时用于验证其身份，通过输入密码的形式
//用户的姓名与密码相匹配，信息储存于文件中users.dat
//将在mainwindow.cpp中对应的功能函数中实现其他功能前验证密码
//具体定义实现在usermanager.cpp中
//2024.6.11修改了代码的模板的规范性和注释的规范性
//2024.6.12新增了三个函数userExists，addUser，updatePassword用于新增的RegisterDialog.cpp来实现弹出窗口注册或修改密码
//2024.6.12在usermanager类中新增private变量USER_FILE用于指代users.dat
//2024.6.13修改了代码的模板的规范性和注释的规范性
#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <QString>
#include <QList>

struct User
{
    //变量用于储存姓名与密码
    QString name;//姓名
    QString password;//密码

    // 将 User 对象转换为字符串，格式为 "name,password"
    QString toString() const
    {
        return name + "," + password;
    }

    // 从字符串创建 User 对象
    static User fromString(const QString &str)
    {
        QStringList parts = str.split(",");
        return User{parts[0], parts[1]};
    }
};

class UserManager
{
    public:

        //注意：姓名与密码在文件中的存在格式是"姓名","密码"(注意是,是英语中的逗号)
        static QList<User> readUsers(const QString &filename);//从文件读详细信息
        static void writeUsers(const QString &filename, const QList<User> &users);//写入姓名与密码
        static bool validateUser(const QString &name, const QString &password, const QString &filename);// 验证用户名和密码

        //新增
        static bool userExists(const QString& username);//检查该用户是否存在
        static void addUser(const QString& username, const QString& password);//将新注册的用户信息包括姓名与密码写入指定文件
        static void updatePassword(const QString& username, const QString& password);//用于实现修改密码在用户文件中

    private:
        static const QString USER_FILE;//将users.dat路径赋予该变量
};

#endif // USERMANAGER_H
