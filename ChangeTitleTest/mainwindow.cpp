#include "mainwindow.h"
#include "windowtitle.h"
#include "ui_mainwindow.h"
#include <QLabel>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle(HELLO_THERE);
}

MainWindow::~MainWindow()
{
    delete ui;
}
