#include "database.h"

DataBase::DataBase()
{

}


void DataBase::push_back(chat _chat)
{
    _CHAT.push_back(_chat);
}

void DataBase::push_back(user _user)
{
    _USER.push_back(_user);
}

bool DataBase::add_user(QString _login, QString _password)
{

    user _buf(_login,_password,_USER.size()+1);
    if(chek_user(&_buf))
    {
        _USER.push_back(_buf);
        return true;
    }
    return false;
}

bool DataBase::chek_chat(chat* _chat) const
{
    for(auto elem:_CHAT)
    {
        if(elem==_chat) return true;
    }
    return false;
}

user DataBase::finduser(QString login) const
{
    for(auto elem:_USER)
    {
        if(elem.getlog()==login) return elem;
    }
    return user();
}

chat DataBase::getchat_by_name(QString name) const
{
    for(auto elem:_CHAT)
    {
        if(elem.chekname(name)) return elem;
    }
    return  chat();
}

bool DataBase::chek_user(QString login) const
{
    for(auto elem:_USER)
    {
        if(elem.getlog()==login) return true;
    }
    return  false;
}

 bool DataBase::chek_user(user *_user) const
 {

     for(auto elem:_USER)
     {

         if(elem==_user) return true;
     }
     return false;
 }
  void DataBase::send_massage(int cIndex,massage _massage)
  {
      _CHAT[cIndex].push_back(_massage);

  }

  QVector<user> DataBase::get_users() const
  {
      return _USER;
  }

  QVector<chat> DataBase::get_chats() const
  {
      return _CHAT;
  }


  QVector<chat> DataBase::get_user_chats(user *_user) const
  {
      QVector<chat> _buf;
      for(auto elem:_CHAT)
      {
          if(elem.chek_user(_user)) _buf.push_back(elem);
      }
      return _buf;
  }



  int DataBase::usercount() const
  {
      return _USER.size();
  }
  DataBase::~DataBase()
  {

  }
