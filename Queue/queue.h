#ifndef QUEUE_H
#define QUEUE_H

#include <QMainWindow>

namespace Ui {
class Queue;
}

class Queue : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Queue(QWidget *parent = 0);
    ~Queue();
    
private:
    Ui::Queue *ui;
};

#endif // QUEUE_H
