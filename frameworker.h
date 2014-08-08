#ifndef FRAMEWORKER_H
#define FRAMEWORKER_H

#include <QObject>

class FrameWorker : public QObject
{
    Q_OBJECT
public:
    explicit FrameWorker(QObject *parent = 0);
    FrameWorker();
    ~FrameWorker();

signals:

public slots:

};

#endif // FRAMEWORKER_H
