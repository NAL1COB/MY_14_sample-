#include "onthread.h"
#include <QDebug>
#include <QEventLoop>

onThread::onThread(QThread *parent) :
    QThread(parent),m_thread(0)
{
    moveToThread(this);
}

void onThread::run()
{

   QEventLoop loop;
   loop.exec();
}

void onThread::whenThread()//(int ctr)
{

    qDebug() << "Receiver ThreadID =" << currentThreadId();
   // m_thread += ctr;
   // qDebug() << "Hit Count = " << m_thread;
}
