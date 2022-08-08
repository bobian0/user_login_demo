#include "showwindow.h"
#include "ui_showwindow.h"

ShowWindow::ShowWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShowWindow)
{
    ui->setupUi(this);
}

ShowWindow::~ShowWindow()
{
    delete ui;
}
