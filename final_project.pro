#-------------------------------------------------
#
# Project created by QtCreator 2024-03-17T13:28:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = final_project
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    showchat.cpp \
    showuser.cpp \
    createuser.cpp \
    chat.cpp \
    database.cpp \
    massage.cpp \
    user.cpp \
    chatwindow.cpp \
    chatcreator.cpp \
    dialog.cpp \
    passwordenter.cpp

HEADERS += \
        mainwindow.h \
    showchat.h \
    showuser.h \
    createuser.h \
    chat.h \
    database.h \
    massage.h \
    user.h \
    chatwindow.h \
    chatcreator.h \
    dialog.h \
    passwordenter.h

FORMS += \
        mainwindow.ui \
    showchat.ui \
    showuser.ui \
    createuser.ui \
    chatwindow.ui \
    chatcreator.ui \
    dialog.ui \
    passwordenter.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
