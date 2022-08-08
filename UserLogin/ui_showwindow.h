/********************************************************************************
** Form generated from reading UI file 'showwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWWINDOW_H
#define UI_SHOWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowWindow
{
public:

    void setupUi(QWidget *ShowWindow)
    {
        if (ShowWindow->objectName().isEmpty())
            ShowWindow->setObjectName(QString::fromUtf8("ShowWindow"));
        ShowWindow->resize(400, 300);

        retranslateUi(ShowWindow);

        QMetaObject::connectSlotsByName(ShowWindow);
    } // setupUi

    void retranslateUi(QWidget *ShowWindow)
    {
        ShowWindow->setWindowTitle(QCoreApplication::translate("ShowWindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowWindow: public Ui_ShowWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWWINDOW_H
