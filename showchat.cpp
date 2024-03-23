#include "showchat.h"
#include "ui_showchat.h"

showchat::showchat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::showchat)
{
    ui->setupUi(this);

}

showchat::showchat(DataBase *database,user user,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::showchat),_database(database),_user(user)
{
    ui->setupUi(this);
    ui->previos->setEnabled(0);
    if(_database->get_user_chats(&_user).size()==0)ui->label->setText("Больше нет чатов");
    else {
        ui->label->setText(_database->get_user_chats(&_user)[chatnumber-1].getname());
    }
}

showchat::~showchat()
{
    delete ui;
}

void showchat::on_showchat_2_clicked()
{
  if(_database->get_user_chats(&_user).size()==0)
  {
       Dialog *buf=new Dialog("нет пользователей");
       buf->show();
  }
  else
  {
  ChatWindow *buf=new ChatWindow(_database,chatnumber-1,_user.getid());
  buf->show();
  hide();
  }
}

void showchat::on_next_clicked()
{
 chatnumber++;
 if(_database->get_user_chats(&_user).size()>=chatnumber)
 {
     ui->label->setText(_database->get_user_chats(&_user)[chatnumber-1].getname());
 }
 else {

     ui->label->setText("Больше нет чатов");
     ui->next->setEnabled(0);
     ui->previos->setEnabled(1);
 }

}

void showchat::on_previos_clicked()
{
 chatnumber--;
    if(chatnumber<2)
    {
        if(chatnumber==0)ui->label->setText("Больше нет чатов");
        ui->previos->setEnabled(0);
        ui->next->setEnabled(1);
    }
        else {
             ui->label->setText(_database->get_user_chats(&_user)[chatnumber-1].getname());
        }
}

void showchat::on_createchat_clicked()
{
    ChatCreator *buf=new ChatCreator(_database,_user);
    buf->show();
    hide();
}

