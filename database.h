#pragma once
#include"chat.h"

class DataBase
{
private:
    QVector<chat> _CHAT;
    QVector<user> _USER;
public:
    DataBase();
    void push_back(chat _chat);
    void push_back(user _user);
    bool add_user(QString _login,QString _password);
    bool chek_user(user *_user) const;
    bool chek_chat(chat *_chat) const;
    bool chek_user(QString login) const;
    user finduser(QString login) const;
    QVector<chat> get_user_chats(user *_user) const;
    QVector<user> get_users() const;
    QVector<chat> get_chats() const;
    int usercount() const;
    chat getchat_by_name(QString name) const;
    void send_massage(int chIndex,massage _massage);
    ~DataBase();
};

QString setchat(DataBase _database,chat _chat);
