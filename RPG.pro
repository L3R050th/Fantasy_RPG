QT += core
QT -= gui

CONFIG += c++11

TARGET = RPG
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    umgebung.cpp \
    story.cpp \
    schicksalsfrage.cpp \
    krieger.cpp \
    magier.cpp \
    bogenschuetze.cpp

HEADERS += \
    umgebung.h \
    story.h \
    schicksalsfrage.h \
    charname.h \
    krieger.h \
    klasse.h \
    magier.h \
    bogenschuetze.h
