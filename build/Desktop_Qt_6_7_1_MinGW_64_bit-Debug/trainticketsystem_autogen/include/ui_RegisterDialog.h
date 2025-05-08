/********************************************************************************
** Form generated from reading UI file 'RegisterDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QLineEdit *lineEditUsername;
    QLineEdit *lineEditPassword;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName("RegisterDialog");
        RegisterDialog->resize(400, 300);
        lineEditUsername = new QLineEdit(RegisterDialog);
        lineEditUsername->setObjectName("lineEditUsername");
        lineEditUsername->setGeometry(QRect(120, 90, 113, 23));
        lineEditPassword = new QLineEdit(RegisterDialog);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setGeometry(QRect(120, 140, 113, 23));
        pushButton = new QPushButton(RegisterDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 110, 80, 24));
        label = new QLabel(RegisterDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 90, 54, 16));
        label_2 = new QLabel(RegisterDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 140, 54, 16));

        retranslateUi(RegisterDialog);

        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QCoreApplication::translate("RegisterDialog", "\346\263\250\345\206\214\346\210\226\344\277\256\346\224\271", nullptr));
        pushButton->setText(QCoreApplication::translate("RegisterDialog", "\347\241\256\350\256\244", nullptr));
        label->setText(QCoreApplication::translate("RegisterDialog", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterDialog", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
