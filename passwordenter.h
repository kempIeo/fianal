#pragma once

#include <QMainWindow>
#include"showchat.h"

namespace Ui {
class PasswordEnter;
}

class PasswordEnter : public QMainWindow
{
    Q_OBJECT

public:
    explicit PasswordEnter(QWidget *parent = nullptr);
    PasswordEnter(DataBase *_database,user _user,QWidget *parent = nullptr);
    ~PasswordEnter();

private slots:
    void on_pushButton_clicked();

private:
    Ui::PasswordEnter *ui;
    DataBase *_database;
    user _user;
};


