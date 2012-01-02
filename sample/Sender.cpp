#include "sender.h"
#include<QTimerEvent>
#include<QDebug>

sender::sender(QObject *parent) :
    QObject(parent)
{
  i = 0;
  startTimer(2000);
  rec = new onThread();
  rec->start();
 connect(this,SIGNAL(hitthread()/*(int)*/),rec,SLOT(whenThread()/*(int)*/   ),Qt::QueuedConnection);
}

void sender::timerEvent(QTimerEvent *event)
{
    i++;
     qDebug() << "Timer ID:" << event->timerId();
    if (i==3)
    {
        i = 0;
        emit sigSender();
        //i = 0;
        qDebug("Emited");
        //((sender*)this)->timer();
    }
    emit hitthread();//(i);
    //i++;
}

/*void sender::timer()
{
    qDebug() << "Connect";
    connect(this,SIGNAL(sigSender()),rec,SLOT(sltReceiver()),Qt::QueuedConnection);
}*/

