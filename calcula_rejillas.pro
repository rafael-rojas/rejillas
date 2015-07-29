

QT       += core gui
QT       += qml

TARGET = calcula_rejillas
TEMPLATE = app


SOURCES += main.cpp\
    rejilla.cpp \
    tabla.cpp \
    resultado.cpp

HEADERS  += tabla.h \
    rejilla.h \
    resultado.h

CONFIG += debug