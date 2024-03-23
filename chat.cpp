#include "chat.h"

chat::chat()
{

}

bool chat::chek_user(user *_user) const
{
    for (auto elem : _users)
    {
        if (elem == _user)
        {
            return true;
        }
    }
    return false;
}

void chat::push_back(user _user)
{
    if(!chek_user(&_user)) _users.push_back(_user);

}


void chat::push_back(massage _massage)
{
    _massages.push_back(_massage);
}

void chat::push_back(user _user, massage _massage)
{
    if(!chek_user(&_user))_users.push_back(_user);
    _massages.push_back(_massage);
}
bool chat::operator==(chat *_chat) const
{
    return _massages==_chat->_massages&&_users==_chat->_users;
}

 QVector<massage> chat::get_massage() const
{
 return _massages;
}
bool chat::chekname(QString name) const
 {
     return name==_name;
 }

void chat::cahgename(QString name)
{
    _name=name;
}

QString chat::getname() const
{
    return _name;
}

 chat::chat(QString name):_name(name)
 {}

chat::~chat()
{

}
