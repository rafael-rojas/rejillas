

QT       += core gui
QT       += qml KI18n
QT       += KI18n KCoreAddons KDeclarative

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