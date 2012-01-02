#include <QtGui/QApplication>
#include "queue.h"
#include<QDebug>
#include<QtGui>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug("Queue using QList");
    QList<QString> l_list;
    l_list << "1" << "2"<<"4";

qDebug("Inserting elements into queue");
    l_list.prepend("0");
    l_list.append("5");
    l_list.insert(3,"3");

    QListIterator<QString> l_sli(l_list);
    while (l_sli.hasNext())
    {
        qDebug() << l_sli.next();
    }


    qDebug("Queue using QVector");
    QVector<QString> l_vector;
    l_vector << "A"<<"C"<<"D";

//Inserting elements into queue using List
 /*Inserted H at the position 2 by 2 times*/
    l_vector.insert(1,2,"B");

    QVectorIterator<QString> l_svi(l_vector);
    while (l_svi.hasNext())
    {
        qDebug() << l_svi.next();
    }

    return a.exec();
}
