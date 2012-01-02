#ifndef SENDER_H
#define SENDER_H

#include <QObject>
//#include<reciver.h>
#include<onthread.h>

class sender : public QObject
{
    Q_OBJECT

    int i;
    onThread *rec;

public:
    explicit sender(QObject *parent = 0);
   // void timer();

signals:
    void sigSender();
    void hitthread();//(int);

protected:
    void timerEvent(QTimerEvent *event);

public slots:

};

#endif // SENDER_H
