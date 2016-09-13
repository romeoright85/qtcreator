#include "mainwindow.h"
#include <QApplication>
#include "version.cpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle(VERSION_TITLE);
    w.show();

    return a.exec();
}
