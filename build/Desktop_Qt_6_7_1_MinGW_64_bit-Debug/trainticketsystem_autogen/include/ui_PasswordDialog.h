/********************************************************************************
** Form generated from reading UI file 'PasswordDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDDIALOG_H
#define UI_PASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PasswordDialog
{
public:
    QLineEdit *lineEditPassword;
    QPushButton *confirmButton;
    QLabel *label;

    void setupUi(QWidget *PasswordDialog)
    {
        if (PasswordDialog->objectName().isEmpty())
            PasswordDialog->setObjectName("PasswordDialog");
        PasswordDialog->resize(376, 222);
        lineEditPassword = new QLineEdit(PasswordDialog);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setGeometry(QRect(70, 100, 113, 23));
        confirmButton = new QPushButton(PasswordDialog);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(230, 100, 80, 24));
        label = new QLabel(PasswordDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 70, 81, 16));

        retranslateUi(PasswordDialog);

        QMetaObject::connectSlotsByName(PasswordDialog);
    } // setupUi

    void retranslateUi(QWidget *PasswordDialog)
    {
        PasswordDialog->setWindowTitle(QCoreApplication::translate("PasswordDialog", "\351\252\214\350\257\201", nullptr));
        confirmButton->setText(QCoreApplication::translate("PasswordDialog", "\347\241\256\350\256\244", nullptr));
        label->setText(QCoreApplication::translate("PasswordDialog", "\350\276\223\345\205\245\345\257\206\347\240\201\351\252\214\350\257\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PasswordDialog: public Ui_PasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDDIALOG_H
