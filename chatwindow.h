#pragma once

#include <QMainWindow>
#include"mainwindow.h"
#include"database.h"

namespace Ui {
class ChatWindow;
}

class ChatWindow : public QMainWindow
{
    Q_OBJECT

public:
    ChatWindow(DataBase *database,int chINDEX,int INDEX,QWidget *parent = nullptr);
    explicit ChatWindow(QWidget *parent = nullptr);
    ~ChatWindow();

private slots:
    void on_back_clicked();

    void on_send_clicked();

private:
    Ui::ChatWindow *ui;
    DataBase *_database;
    int chINDEX;
    int INDEX;
};


