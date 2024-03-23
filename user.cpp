#include "user.h"

user::user(): _login(""), _password("")
{

}

user::user(QString login,QString password, int id): _id(id), _login(login), _password(password)
{

}

QString user::getlog() const
{

    return _login;
}

QString user::getpas() const
{
    return _password;
}

bool user::operator==(user *_user) const
{
    return _user->getlog()==getlog();
}
int user::getid() const
{
   return _id;
}

bool user::operator==(const user _user) const
{
    return _user.getlog()==getlog();
}

user::~user()
{

}
