#include "chatcreator.h"
#include "ui_chatcreator.h"

ChatCreator::ChatCreator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChatCreator)
{
    ui->setupUi(this);
}

ChatCreator::ChatCreator(DataBase *database,user user,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChatCreator),_database(database),_user(user)
{
    ui->setupUi(this);
}

ChatCreator::~ChatCreator()
{
    delete ui;
}

void ChatCreator::on_createchat_clicked()
{
    if(ui->name->text()=="")
    {
        Dialog *buf=new Dialog("Введите название чата");
        buf->show();
    }
    _chat.cahgename(ui->name->text());
    _database->push_back(_chat);
    showchat *buf=new showchat(_database,_user);
    buf->show();
    hide();

}

void ChatCreator::on_adduser_clicked()
{

    if(!_database->chek_user(ui->login->text()))
    {
       Dialog *buf=new Dialog("такого пользователя нет");
        buf->show();
    }else
    {
    _chat.push_back(_database->finduser(ui->login->text()));
    Dialog *buf=new Dialog("пользователь добавлен");
     buf->show();
    }
}
