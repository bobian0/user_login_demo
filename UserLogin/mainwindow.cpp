#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qdebug.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //实例化

    qDebug() << QString("你好") << endl;



    //禁用按钮
    ui->btn_onthing->setEnabled(false);

    connect(ui->btn_show_user,SIGNAL(clicked()),this,SLOT(slot_show_user()));
    connect(ui->btn_onthing,SIGNAL(clicked()),this,SLOT(slot_show_onthing()));
    connect(m_userlogin,SIGNAL(signal_text(bool)),this,SLOT(slot_button_switch()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slot_show_user()
{

    m_userlogin->setVisible(true);

}

void MainWindow::slot_show_onthing()
{

    m_showwindow->setVisible(true);
}

void MainWindow::slot_button_switch()
{
    ui->btn_onthing->setEnabled(true);
}

