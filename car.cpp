#include "car.h"

Car::Car(): color(Qt::gray), wheelsAngle(0)
{
   setPos(100, 100);
   setFlag(QGraphicsItem::ItemIsMovable, true);
   setZValue(1);
}
QRectF Car::boundingRect() const
{
    return QRectF(-35, -81, 70, 115);
}

void Car::resetCarPos(int x, int y, int phi)
{
    setPos(x, y);
    setRotation(phi);
}

QColor Car::getColor()
{
    return color.color();
}
void Car::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);
    setScale(0.5);
    painter->setBrush(Qt::green);
    painter->drawRect(-20, -58, 40, 2); // front axel
    painter->drawRect(-20, 7, 40, 2); // rear axel

    painter->setBrush(color);
    painter->drawRect(-25, -79, 50, 10); // front wing

    painter->drawEllipse(-25, -48, 50, 20); // side pods
    painter->drawRect(-25, -38, 50, 35); // side pods
    painter->drawRect(-5, 9, 10, 10); // back pod

    painter->drawEllipse(-10, -81, 20, 100); // main body

    painter->drawRect(-17, 19, 34, 15); // rear wing

    painter->setBrush(Qt::black);
    painter->drawPie(-5, -51, 10, 15, 0, 180 * 16);
    painter->drawRect(-5, -44, 10, 10); // cocpit

    painter->save();
    painter->translate(-20, -58);
    painter->rotate(wheelsAngle);
    painter->drawRect(-10, -7, 10, 15); // front left
    painter->restore();

    painter->save();
    painter->translate(20, -58);
    painter->rotate(wheelsAngle);
    painter->drawRect(0, -7, 10, 15); // front left
    painter->restore();

    painter->drawRect(-30, 0, 12, 17); // rear left
    painter->drawRect(19, 0, 12, 17);  // rear right
}
void Car::advance(int phase)
{
   if(!phase) return;
   setPos(mapToParent(0,-(10)));

//   count++;
//   if (count==2)
//   {
//       QTimer *t = new QTimer(this);
//       t->stop();
//   }
}
