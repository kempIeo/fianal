#include "chatwindow.h"
#include "ui_chatwindow.h"

ChatWindow::ChatWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChatWindow)
{
    ui->setupUi(this);
}

ChatWindow::ChatWindow(DataBase *database,int chINDEX,int INDEX,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChatWindow),_database(database),chINDEX(chINDEX),INDEX(INDEX)
{
    ui->setupUi(this);
    for(auto elem:_database->get_chats()[chINDEX].get_massage())
    {
        ui->textEdit->insertHtml(_database->get_users()[elem.get_sender_id()].getlog()+":"+elem.gettext()+"   ");
    }
}

ChatWindow::~ChatWindow()
{
    delete ui;
}

void ChatWindow::on_back_clicked()
{

    MainWindow *buf=new MainWindow(_database);
    buf->show();
    hide();
}

void ChatWindow::on_send_clicked()
{
    _database->send_massage(chINDEX,massage(INDEX,ui->massange->text()));
    if(_database->get_chats()[chINDEX].get_massage().size()==0)
    {
        Dialog *buf=new Dialog("пустой чат");
               buf->show();
    }

    ui->textEdit->insertHtml(_database->get_users()[INDEX].getlog()+":"+ui->massange->text()+"       ");

}
