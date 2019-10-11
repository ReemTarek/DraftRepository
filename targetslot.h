#ifndef TARGETSLOT_H
#define TARGETSLOT_H

#include <garageitems.h>

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>

class TargetSlot : public GarageItems
{
public:
    TargetSlot();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) ;
};

#endif // TARGETSLOT_H
