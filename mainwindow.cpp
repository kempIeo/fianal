#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::MainWindow(DataBase *database,QWidget *parent):
QMainWindow(parent),
ui(new Ui::MainWindow),_database(database)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_CreatNewUser_clicked()
{
    createuser *buf=new createuser(_database);
    buf->show();
    hide();
}

void MainWindow::on_CheakUser_clicked()
{
    ShowUser *buf =new ShowUser(_database);
    buf->show();
    hide();
}
