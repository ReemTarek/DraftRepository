#include "occupiedslot.h"

#include<QBrush>
#include<QPainter>
#include <iostream>
using namespace std;
OccupiedSlot::OccupiedSlot()
{
    setFlag(ItemIsMovable);

}
QRectF OccupiedSlot::boundingRect() const
{
    return QRectF(10, 10, 50, 100);
}

void OccupiedSlot::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF Slot = boundingRect();
    QBrush brush(Qt::red);
    painter->fillRect(Slot, brush);
    painter->drawRect(Slot);
    QPointF newpoint = mapToParent((boundingRect().width()),(boundingRect().width()+
                                                               10));
    if(!scene()->sceneRect().contains(newpoint)){
        //move back in bounds
        cout<<"out of bound!!!"<<endl;
        setPos(10,10);

    }

}
