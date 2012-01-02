#ifndef RECIVER_H
#define RECIVER_H

#include <QObject>

class Reciver : public QObject
{
    Q_OBJECT
    int icount;

public:
    explicit Reciver(QObject *parent = 0);
    
signals:
    
public slots:
     void sltReceiver();
};

#endif // RECIVER_H
