#ifndef OCCUPIEDSLOT_H
#define OCCUPIEDSLOT_H
#include <garageitems.h>

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>


class OccupiedSlot : public GarageItems
{
public:
    OccupiedSlot();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) ;
};

#endif // OCCUPIEDSLOT_H
