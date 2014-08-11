#-------------------------------------------------
#
# Project created by QtCreator 2014-08-08T16:08:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SecCam
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    frameworker.cpp

HEADERS  += mainwindow.h \
    frameworker.h

FORMS    += mainwindow.ui

unix:!macx {

}

macx {
    INCLUDEPATH += /opt/local/include/
    LIBS += /opt/local/lib/libopencv_contrib.2.4.9.dylib
    LIBS += /opt/local/lib/libopencv_highgui.2.4.9.dylib
    LIBS += /opt/local/lib/libopencv_imgproc.2.4.9.dylib
    LIBS += /opt/local/lib/libopencv_core.2.4.9.dylib

}

win32 {

}
