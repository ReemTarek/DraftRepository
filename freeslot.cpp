#include "freeslot.h"
#include<QBrush>
#include<QPainter>
#include "iostream"
using namespace std;
FreeSlot::FreeSlot()
{
    setFlag(ItemIsMovable);

}
FreeSlot::FreeSlot(int theta)
{
    this->theta = theta;
}
QRectF FreeSlot::boundingRect() const
{
     return QRectF(10, 10, 50, 100);
}

void FreeSlot::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF Slot = boundingRect();
    QBrush brush(Qt::green);
    painter->fillRect(Slot, brush);
    painter->drawRect(Slot);
    setRotation(theta);
    QPointF newpoint = mapToParent((boundingRect().width()),(boundingRect().width()+
                                                               10));
    if(!scene()->sceneRect().contains(newpoint)){
        //move back in bounds
        cout<<"out of bound!!!"<<endl;
       // setPos(10,10);

    }

}
