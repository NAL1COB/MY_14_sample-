#include <QtCore/QCoreApplication>
#include "sender.h"
#include "reciver.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    sender objSender;
    Reciver objreciver;
    QObject::connect(&objSender,SIGNAL(sigSender()),&objreciver,SLOT(sltReceiver()),Qt::QueuedConnection);
    return a.exec();
}
