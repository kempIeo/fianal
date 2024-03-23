#include "createuser.h"
#include "ui_createuser.h"

createuser::createuser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::createuser)
{
    ui->setupUi(this);
}
createuser::createuser(DataBase *database,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::createuser),_database(database)
{
    ui->setupUi(this);
}

createuser::~createuser()
{
    delete ui;
}

void createuser::on_creatuser_clicked()
{
    QString login=ui->login->text();
    QString pasword=ui->password->text();
    if(login==""||pasword=="")
    {
        Dialog *t=new Dialog("незаполненые поля");
        t->show();
        return;
    }
    user buf(login,pasword,_database->usercount());
    if(_database->chek_user(&buf))
    {
        Dialog *t=new Dialog("такой пользователь уже есть");
        t->show();
    }
    else
    {
    _database->push_back(buf);
    MainWindow *main=new MainWindow(_database);
    main->show();
    hide();
    }
}
