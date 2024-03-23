#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#pragma once
#include <QMainWindow>
#include"database.h"
#include"createuser.h"
#include"showuser.h"
#include"dialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(DataBase *database,QWidget *parent = nullptr);
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_CreatNewUser_clicked();

    void on_CheakUser_clicked();

private:
    Ui::MainWindow *ui;
    DataBase *_database;
};

#endif // MAINWINDOW_H
