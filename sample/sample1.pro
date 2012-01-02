#-------------------------------------------------
#
# Project created by QtCreator 2011-12-23T16:18:47
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = sample1
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    Sender.cpp \
    reciver.cpp \
    onthread.cpp

HEADERS += \
    sender.h \
    reciver.h \
    onthread.h
