#include "mainwindow.h"
#include <QApplication>
#include"database.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DataBase database;
    MainWindow w(&database);
    w.show();

    return a.exec();
}
