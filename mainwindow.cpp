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

    QThread* thread = new QThread();
    FrameWorker* worker = new FrameWorker();
    worker->moveToThread(thread);
    //connect(worker, SIGNAL(error(QString)), this, SLOT(errorString(QString)));
    connect(thread, SIGNAL(started()), worker, SLOT(process()));
    connect(worker, SIGNAL(finished()), thread, SLOT(quit()));
    connect(worker, SIGNAL(finished()), worker, SLOT(deleteLater()));
    connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));
    connect(worker, SIGNAL(newFrame()), this, SLOT(updateFrame()));
    thread->start();
}

void MainWindow::updateFrame() {
    qDebug() << "Got the frame";
}

MainWindow::~MainWindow()
{
    delete ui;
}
