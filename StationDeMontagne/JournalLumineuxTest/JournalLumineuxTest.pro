QT += testlib
QT -= gui

QT += serialport

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app
INCLUDEPATH += ../StationDeMontagne

SOURCES +=  tst_journallumineuxtest.cpp \
                ../StationDeMontagne/journallumineux.cpp \
                ../StationDeMontagne/portserie.cpp
