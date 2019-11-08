#ifndef CAR_H
#define CAR_H
#include<QGraphicsObject>
#include<QBrush>
#include<QPainter>
class Car:public QGraphicsObject
{
    Q_OBJECT
public:
    Car();
    QRectF boundingRect() const;
    void resetCarPos(int x, int y, int phi);
    QColor getColor();
protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = 0);

private:
    QBrush color;
    qreal wheelsAngle;
};

#endif // CAR_H
