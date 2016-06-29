QT += core
QT -= gui

CONFIG += c++11

TARGET = RPG
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    umgebung.cpp \
    story.cpp

HEADERS += \
    umgebung.h \
    story.h
