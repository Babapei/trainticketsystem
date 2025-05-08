//于usermanager.h同时创建
//用于实现订票，改签，退票，查询信息中验证身份功能，用户的详细信息
//2024.6.11修改了代码的模板的规范性和注释的规范性
//2024.6.12新增了三个函数userExists，addUser，updatePassword的定义
//2024.6.12在usermanager类中新增private变量USER_FILE用于指代users.dat
//2024.6.13修改了代码的模板的规范性和注释的规范性
//2024.6.17修改注释
#include "UserManager.h"
#include <QFile>
#include <QTextStream>

//类似于filemanager.h,ticketmanager.h中的功能函数（读出，写入，验证）
QList<User> UserManager::readUsers(const QString &filename)
{
    QList<User> users;//创建一个空的QList列表来存储读取的火车车次信息
    QFile file(filename);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))//以只读和文本模式打开文件，如果文件成功打开，继续执行后续操作。
    {
        QTextStream in(&file);//创建一个QTextStream对象以便从文件中读取文本
        while (!in.atEnd())
        {
            QString line = in.readLine();
            users.append(User::fromString(line));//将每一行转换为 User 对象并添加到列表中
        }
        file.close();
    }
    return users;
}

void UserManager::writeUsers(const QString &filename, const QList<User> &users)
{
    QFile file(filename);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))//以只读和文本模式打开文件，如果文件成功打开，继续执行后续操作。
    {
        QTextStream out(&file);
        for (const User &user : users)
        {
            out << user.toString() << "\n";//将每个 User 对象转换为字符串并写入文件
        }
        file.close();
    }
}

//对姓名和密码进行验证，若匹配正确返回布尔类型正确
bool UserManager::validateUser(const QString &name, const QString &password, const QString &filename)
{
    QList<User> users = readUsers(filename);
    for (const User &user : users)
    {
        if (user.name == name && user.password == password)
        {
            return true;
        }
    }
    return false;
}

const QString UserManager::USER_FILE = "users.dat";//文件变量尽心赋予

//用于检查该名字是个否存在就是是否被注册过，（与上面一个函数相区分），返回布尔类型变量
bool UserManager::userExists(const QString& username)
{
    QList<User> users = readUsers(USER_FILE);
    for (const User& user : users)
    {
        if (user.name == username)
        {
            return true;
        }
    }
    return false;
}

//用于添加未注册新用户的信息至指定文件USER_FILE
void UserManager::addUser(const QString& username, const QString& password)
{
    QList<User> users = readUsers(USER_FILE);
    User user;
    user.name = username;
    user.password = password;
    users.append(user);//将新用户添加到用户列表中
    writeUsers(USER_FILE, users);//将用户列表写入文件
}

//实现将老用户修改的密码在指定储存用户信息的文件中进行替换
void UserManager::updatePassword(const QString& username, const QString& password)
{
    QList<User> users = readUsers(USER_FILE);
    for (User& user : users)
    {
        if (user.name == username)
        {
            user.password = password;//更新用户密码
            break;
        }
    }
    writeUsers(USER_FILE, users);//将用户列表写入文件
}
