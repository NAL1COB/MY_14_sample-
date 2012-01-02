#include "queue.h"
#include "ui_queue.h"

Queue::Queue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Queue)
{
    ui->setupUi(this);
}

Queue::~Queue()
{
    delete ui;
}
