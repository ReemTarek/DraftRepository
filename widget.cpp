#include "widget.h"
#include "ui_widget.h"
#include<QGraphicsView>
#include "freeslot.h"
#include "occupiedslot.h"
#include "targetslot.h"
#include "obstacle.h"
#include <iostream>
using namespace std;
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,430,341);


    ui->graphicsView->setScene(scene);

    //view = new QGraphicsView(this);

    //connectToGui();

}

Widget::~Widget()
{
    delete ui;
}
//void Widget::connectToGui()
//{
//    connect(freeslot, SIGNAL(clicked(bool)), this, SLOT(addFreeSlot()));
//}
//void Widget::setupBoard()
//{


//  view->centerOn(50, 50);
//  QRectF rec(0, 0, 500, 500);
//  scene->setSceneRect(rec);
//  //scene->addItem(myCar);

//view->setScene(scene);


// freeslot->setText("Add FreeSlot");



//}
//void Widget::addFreeSlot()
//{
//    FreeSlot *free = new FreeSlot;
//    scene->addItem(free);
//}

void Widget::on_FreeSlot_clicked()
{FreeSlot *free = new FreeSlot;
     scene->addItem(free);
     cout<<"entered here"<<endl;
}

void Widget::on_BusySlot_clicked()
{
    OccupiedSlot *Busy = new OccupiedSlot();
    scene->addItem(Busy);
}

void Widget::on_TargetSlot_clicked()
{
    TargetSlot *Target = new TargetSlot;
    scene->addItem(Target);
}

void Widget::on_Obstacle_clicked()
{
    Obstacle *block = new Obstacle;
    scene->addItem(block);
}
