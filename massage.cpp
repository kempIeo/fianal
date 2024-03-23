#include "massage.h"

massage::massage()
{

}

massage::massage(int sender_id,QString text): _sender_id(sender_id),_text(text)
{

}

QString massage::gettext() const
{
    return _text;
}

int massage::get_sender_id() const
{
    return _sender_id;
}



bool massage::operator==(massage const _massage) const
{
    return (_text==_massage._text&&_sender_id==_massage._sender_id);
}
massage::~massage()
{

}
