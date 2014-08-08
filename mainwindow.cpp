#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QThread>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << "Hello World" << endl;
    qDebug() << QThread::currentThreadId();
    qDebug() << QThread::currentThreadId();
}

MainWindow::~MainWindow()
{
    delete ui;
}
