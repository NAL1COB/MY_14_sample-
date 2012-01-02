#include "reciver.h"
#include "QtDebug"

Reciver::Reciver(QObject *parent) :
    QObject(parent)
{
    icount = 0;
}

void Reciver::sltReceiver()
{
   icount++;
  //qDebug("count");
  qDebug() << "count:" << icount;
}
