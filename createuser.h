#ifndef CREATEUSER_H
#define CREATEUSER_H
#pragma once
#include <QMainWindow>
#include"database.h"
#include"mainwindow.h"

namespace Ui {
class createuser;
}

class createuser : public QMainWindow
{
    Q_OBJECT

public:
     createuser(DataBase *database,QWidget *parent = nullptr);
    explicit createuser(QWidget *parent = nullptr);
    ~createuser();

private slots:
     void on_creatuser_clicked();

private:
    Ui::createuser *ui;
    DataBase *_database;
};

#endif // CREATEUSER_H
