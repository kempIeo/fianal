#pragma once

#include <QMainWindow>
#include"database.h"
#include"showchat.h"
#include"showchat.h"

namespace Ui {
class ChatCreator;
}

class ChatCreator : public QMainWindow
{
    Q_OBJECT

public:
    ChatCreator(DataBase *database,user _user,QWidget *parent = nullptr);
    explicit ChatCreator(QWidget *parent = nullptr);
    ~ChatCreator();

private slots:
    void on_createchat_clicked();
    void on_adduser_clicked();

private:
    Ui::ChatCreator *ui;
    DataBase*_database;
    chat _chat;
    user _user;
};


