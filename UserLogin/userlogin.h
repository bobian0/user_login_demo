#ifndef USERLOGIN_H
#define USERLOGIN_H

#include <QWidget>

namespace Ui {
class UserLogin;
}

class UserLogin : public QWidget
{
    Q_OBJECT

public:
    explicit UserLogin(QWidget *parent = nullptr);
    ~UserLogin();

//    Ui::UserLogin *ui;

private:
    Ui::UserLogin *ui;
//    MainWindow *m_mainwindow;


private slots:
    void slots_user_login_in();

signals:
    void signal_text(bool);



//class temp{
//public:
//    static bool optEnable;
//};


};

#endif // USERLOGIN_H
