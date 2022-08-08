#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "userlogin.h"
#include "showwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    ShowWindow * m_showwindow = new ShowWindow();
    UserLogin * m_userlogin = new UserLogin();

private slots:
    void slot_show_user();
    void slot_show_onthing();
    void slot_button_switch();


};
#endif // MAINWINDOW_H
