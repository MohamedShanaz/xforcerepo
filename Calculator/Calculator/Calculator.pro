#-------------------------------------------------
#
# Project created by QtCreator 2015-06-15T23:38:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Calculator
TEMPLATE = app


SOURCES += main.cpp\
        scientificcalc.cpp \
    formulaelement.cpp \
    functionelement.cpp \
    multiplefunctionelement.cpp \
    powerfunctionelement.cpp \
    logfunctionelement.cpp \
    sinefunctionelement.cpp \
    cosinefunctionelement.cpp \
    dividefunctionelement.cpp \
    variableelement.cpp \
    constantelement.cpp \
    additionfunctionelement.cpp \
    subtractionfunctionelement.cpp

HEADERS  += scientificcalc.h \
    formulaelement.h \
    functionelement.h \
    multiplefunctionelement.h \
    powerfunctionelement.h \
    logfunctionelement.h \
    sinefunctionelement.h \
    cosinefunctionelement.h \
    dividefunctionelement.h \
    variableelement.h \
    constantelement.h \
    subtractionfunctionelement.h \
    additionfunctionelement.h

FORMS    += scientificcalc.ui
