#ifndef FRAMEWORKER_H
#define FRAMEWORKER_H

#include <QObject>

class FrameWorker : public QObject
{
    Q_OBJECT
public:
   //explicit FrameWorker(QObject *parent = 0);
    FrameWorker();
    ~FrameWorker();

signals:
    void finished();
    void error(QString err);
    void newFrame();

public slots:
    void process();

private:
    bool capturing;

};

#endif // FRAMEWORKER_H
