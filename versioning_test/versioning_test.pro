#-------------------------------------------------
#
# Project created by QtCreator 2016-09-12T21:11:32
#
#-------------------------------------------------


versioning.commands = C:\cygwin\home\Richard\Cygwin\bash\bash\versioning.bat
versioning.depends = FORCE
QMAKE_EXTRA_TARGETS += versioning
PRE_TARGETDEPS += versioning



QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = versioning_test
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    version.cpp

HEADERS  += mainwindow.h


FORMS    += mainwindow.ui
