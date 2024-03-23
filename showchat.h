#pragma once

#include <QMainWindow>
#include"database.h"
#include"chatwindow.h"
#include"chatcreator.h"

namespace Ui {
class showchat;
}

class showchat : public QMainWindow
{
    Q_OBJECT

public:
    showchat(DataBase *database,user user,QWidget *parent = nullptr);
    explicit showchat(QWidget *parent = nullptr);
    ~showchat();

private slots:
    void on_showchat_2_clicked();

    void on_next_clicked();

    void on_previos_clicked();

    void on_createchat_clicked();



private:
    Ui::showchat *ui;
    DataBase *_database;
    user _user;
    int chatnumber=1;
  };


