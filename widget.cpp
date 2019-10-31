#include "widget.h"
#include "ui_widget.h"
#include<QGraphicsView>
#include "freeslot.h"
#include "occupiedslot.h"
#include "targetslot.h"
#include "obstacle.h"
#include <iostream>
#include<QtCore>
#include<QtGui>
using namespace std;
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,430,341);
    scene->setBackgroundBrush(Qt::Dense7Pattern);
    car = new Car();
    scene->addItem(car);

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
    TargetSlot *Target = new TargetSlot();
    scene->addItem(Target);
}

void Widget::on_Obstacle_clicked()
{
    Obstacle *block = new Obstacle;
    //QTransform q;
   // q.rotate(45,block);
    scene->addItem(block);
}

void Widget::on_TargetSlot_2_clicked()
{
     TargetSlot *Target = new TargetSlot(45);
     scene->addItem(Target);
}

void Widget::on_TargetSlot_3_clicked()
{
    TargetSlot *Target = new TargetSlot(-45);
    scene->addItem(Target);
}

void Widget::on_TargetSlot_4_clicked()
{
    TargetSlot *Target = new TargetSlot(90);
    scene->addItem(Target);
}

void Widget::on_FreeSlot_2_clicked()
{
    FreeSlot *free  = new FreeSlot(45);
    scene->addItem(free);
}

void Widget::on_FreeSlot_3_clicked()
{
    FreeSlot *free  = new FreeSlot(-45);
    scene->addItem(free);
}

void Widget::on_FreeSlot_4_clicked()
{
    FreeSlot *free  = new FreeSlot(90);
    scene->addItem(free);
}

void Widget::on_BusySlot_2_clicked()
{
    OccupiedSlot *busy = new OccupiedSlot(45);
    scene->addItem(busy);
}

void Widget::on_BusySlot_3_clicked()
{
    OccupiedSlot *busy = new OccupiedSlot(-45);
    scene->addItem(busy);
}

void Widget::on_BusySlot_4_clicked()
{
    OccupiedSlot *busy = new OccupiedSlot(90);
    scene->addItem(busy);
}

void Widget::on_ResetCarPos_clicked()
{
    int x = ui->Car_x->toPlainText().toInt();
    int y = ui->Car_y->toPlainText().toInt();
    int phi = ui->Car_phi->toPlainText().toInt();
    car->resetCarPos(x, y, phi);
}
