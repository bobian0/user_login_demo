#include "userlogin.h"
#include "ui_userlogin.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QPushButton>
#include <QSettings>
//bool temp::optEnable = false;


UserLogin::UserLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserLogin)
{
    ui->setupUi(this);


    connect(ui->user_login,SIGNAL(clicked()),this,SLOT(slots_user_login_in()));


}

UserLogin::~UserLogin()
{
    delete ui;
}

void UserLogin::slots_user_login_in()
{

    QString user = ui->user_number->text();
    QString password = ui->use_password->text();

    //登陆成功，显示提醒
    if (user == "123"&&password == "123")
    {
        QMessageBox::information(this,"OK","Right Input");
        this->close();
        emit(signal_text(true));

    }else
    {
        QMessageBox::information(this,"Error","Wrong Input");

    }
}


