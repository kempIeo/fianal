#pragma once

#include "user.h"
#include <QVector>
#include "massage.h"

class chat
{
private:
 QString _name;
 QVector<user> _users;
 QVector<massage> _massages;
public:
chat();
chat(QString name);
void push_back(user _user);
void push_back(massage _massage);
void push_back(user _user,massage _massage);
bool chek_user(user* _user) const;
bool operator==(chat *_chat) const;
bool chekname(QString name) const;
void cahgename(QString name);
QString getname() const;
QVector<massage> get_massage() const;
~chat();
};

