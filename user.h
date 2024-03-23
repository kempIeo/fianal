#pragma once
#include <QApplication>

class user
{
private:
    int _id;
    QString _login;
    QString _password;

public:
    user();
    user(QString login,QString password,int id);
    bool operator==(user *_user) const;
    bool operator==(user const _user) const;
    QString getlog() const;
    QString getpas() const;
    int getid() const;
    ~user();
};


