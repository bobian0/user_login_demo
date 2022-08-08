/********************************************************************************
** Form generated from reading UI file 'userlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLOGIN_H
#define UI_USERLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserLogin
{
public:
    QLineEdit *use_password;
    QPushButton *user_login;
    QLineEdit *user_number;

    void setupUi(QWidget *UserLogin)
    {
        if (UserLogin->objectName().isEmpty())
            UserLogin->setObjectName(QString::fromUtf8("UserLogin"));
        UserLogin->resize(459, 264);
        use_password = new QLineEdit(UserLogin);
        use_password->setObjectName(QString::fromUtf8("use_password"));
        use_password->setGeometry(QRect(80, 80, 301, 41));
        user_login = new QPushButton(UserLogin);
        user_login->setObjectName(QString::fromUtf8("user_login"));
        user_login->setGeometry(QRect(170, 160, 121, 51));
        user_number = new QLineEdit(UserLogin);
        user_number->setObjectName(QString::fromUtf8("user_number"));
        user_number->setGeometry(QRect(80, 20, 301, 41));

        retranslateUi(UserLogin);

        QMetaObject::connectSlotsByName(UserLogin);
    } // setupUi

    void retranslateUi(QWidget *UserLogin)
    {
        UserLogin->setWindowTitle(QCoreApplication::translate("UserLogin", "Form", nullptr));
        use_password->setPlaceholderText(QCoreApplication::translate("UserLogin", "\345\257\206\347\240\201", nullptr));
        user_login->setText(QCoreApplication::translate("UserLogin", "\347\231\273\345\275\225", nullptr));
        user_number->setPlaceholderText(QCoreApplication::translate("UserLogin", "\350\264\246\346\210\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserLogin: public Ui_UserLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLOGIN_H
