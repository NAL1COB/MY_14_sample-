#ifndef ONTHREAD_H
#define ONTHREAD_H

#include <QThread>

class onThread : public QThread
{
    Q_OBJECT

    uint m_thread;
public:
    explicit onThread(QThread *parent = 0);
protected:
    void run();
    //void timerEvent(QTimerEvent *);
signals:

public slots:
    void whenThread();//(int);
};
#endif // ONTHREAD_H
