#include "targetslot.h"

#include<QBrush>
#include<QPainter>
#include <iostream>
using namespace std;
TargetSlot::TargetSlot()
{
    setFlag(ItemIsMovable);

}
TargetSlot::TargetSlot(int theta)
{
    setFlag(ItemIsMovable);
    this->theta =theta;
}
QRectF TargetSlot::boundingRect() const
{
    return QRectF(10, 10, 50, 100);
}

void TargetSlot::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF Slot = boundingRect();
    QColor green30 = Qt::green;
    green30.setAlphaF( 0.3 );
    QBrush brush(green30);
    painter->fillRect(Slot, brush);
    painter->drawRect(Slot);
    setRotation(theta);
    QPointF newpoint = mapToParent((boundingRect().width()),(boundingRect().width()+
                                                               10));
    if(!scene()->sceneRect().contains(newpoint)){
        //move back in bounds
        cout<<"out of bound!!!"<<endl;
        //setPos(10,10);

    }
}
