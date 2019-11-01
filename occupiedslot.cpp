#include "occupiedslot.h"

#include<QBrush>
#include<QPainter>
#include <iostream>
using namespace std;
OccupiedSlot::OccupiedSlot()
{
    setFlag(ItemIsMovable);

}
OccupiedSlot::OccupiedSlot(int theta)
{
    setFlag(ItemIsMovable);
    this->theta = theta;

}
QRectF OccupiedSlot::boundingRect() const
{
    return QRectF(10, 10, 50, 100);
}

void OccupiedSlot::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    setScale(0.7);
    QRectF Slot = boundingRect();
    QColor red30 = Qt::red;
    red30.setAlphaF( 0.3 );
    QBrush brush(red30);
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
