#-------------------------------------------------
#
# Project created by QtCreator 2015-06-15T23:38:02
#
#-------------------------------------------------

QT       += core gui
QT       += core gui \
    printsupport

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
    subtractionfunctionelement.cpp \
    viewhelp.cpp \
    aboutcalculator.cpp \
    graphformula.cpp \
    qcustomplot.cpp \
    newgraph.cpp

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
    additionfunctionelement.h \
    viewhelp.h \
    aboutcalculator.h \
    graphformula.h \
    qcustomplot.h \
    newgraph.h

FORMS    += scientificcalc.ui \
    viewhelp.ui \
    aboutcalculator.ui \
    graphformula.ui \
    newgraph.ui
