#include "passwordenter.h"
#include "ui_passwordenter.h"

PasswordEnter::PasswordEnter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PasswordEnter)
{
    ui->setupUi(this);
}
PasswordEnter::PasswordEnter(DataBase *database,user user,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PasswordEnter),_database(database),_user(user)
{
    ui->setupUi(this);
}

PasswordEnter::~PasswordEnter()
{
    delete ui;
}

void PasswordEnter::on_pushButton_clicked()
{
    QString password=ui->lineEdit->text();
    if(_user.getpas()==password)
    {
        showchat *buf=new showchat(_database,_user);
        buf->show();
        hide();
    }
    else{Dialog *buf=new Dialog("неверный пароль");buf->show();}
}
