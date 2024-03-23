#include "showuser.h"
#include "ui_showuser.h"

ShowUser::ShowUser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ShowUser)
{
    ui->setupUi(this);

}
ShowUser::ShowUser(DataBase *database,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ShowUser),_database(database)
{
    ui->setupUi(this);
    ui->previos->setEnabled(0);
    if(_database->get_users().size()==0)
    {
        ui->label->setText("Больше нет пользователей");
        ui->next->setEnabled(0);
    }
    else {
        ui->label->setText(_database->get_users()[usernamber-1].getlog());
    }
}

ShowUser::~ShowUser()
{
    delete ui;
}

void ShowUser::on_chekchat_clicked()
{
    if((_database->get_users().size()==0))
    {
            Dialog *buf=new Dialog("нет чатов");
            buf->show();
    }
    else
    {
     PasswordEnter *buf=new PasswordEnter(_database,_database->get_users()[usernamber-1]);
     buf->show();
     hide();
    }
}

void ShowUser::on_next_clicked()
{
    usernamber++;
    if(_database->get_users().size()>=usernamber)
    {
        ui->label->setText(_database->get_users()[usernamber-1].getlog());
    }
    else {

        ui->label->setText("Больше нет пользователей");
        ui->next->setEnabled(0);
        ui->previos->setEnabled(1);
    }
}

void ShowUser::on_previos_clicked()
{
    usernamber--;
    if(usernamber==0)
    {
        ui->label->setText("Больше нет пользователей");
        ui->next->setEnabled(1);
        ui->previos->setEnabled(0);
    }
    else
    {
        if(_database->get_users().size()==0) ui->label->setText("Больше нет пользователей");
        else ui->label->setText(_database->get_users()[usernamber-1].getlog());
    }
}

