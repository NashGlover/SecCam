#include "frameworker.h"
#include <QDebug>
#include <QThread>
#include <opencv2/highgui/highgui.hpp>

FrameWorker::FrameWorker()
{

}

FrameWorker::~FrameWorker()
{

}

void FrameWorker::process() {
    cv::VideoCapture cap(0);
    cv::Mat frame;
    capturing = true;

    while (capturing) {
        cap >> frame;
        cv::cvtColor(frame, frame, CV_BGR2RGB);
        newFrame();
        QThread::sleep(1);
    }

    qDebug() << QThread::currentThreadId();
    emit finished();
}
