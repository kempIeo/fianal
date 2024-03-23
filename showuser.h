#pragma once

#include <QMainWindow>
#include"database.h"
#include"showchat.h"
#include"passwordenter.h"

namespace Ui {
class ShowUser;
}

class ShowUser : public QMainWindow
{
    Q_OBJECT

public:
    ShowUser(DataBase *database,QWidget *parent = nullptr);
    explicit ShowUser(QWidget *parent = nullptr);
    ~ShowUser();

private slots:
    void on_chekchat_clicked();

    void on_next_clicked();

    void on_previos_clicked();

private:
    Ui::ShowUser *ui;
    DataBase *_database;
    user _user;
    int usernamber=1;
};


