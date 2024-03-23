#pragma once
#include <QApplication>

class massage
{
private:
    int _sender_id;
    QString _text;
public:
    massage();
    massage(int sender_id,QString text);
    int get_sender_id() const;
    QString   gettext() const;
    bool operator==(massage const _massage) const;
    ~ massage();
};


