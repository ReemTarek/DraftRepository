#ifndef BICYCLE_H
#define BICYCLE_H
#include <QPoint>
#include <QPair>

class Bicycle
{
    QPoint pos; // current postion
    short int theta; // the angle between the bicycle and X-Axis in radians
    double wheelBase; // distance between the wheels in meter
    short int phiMax; // maximum steer angle in radians

public:
    Bicycle();
    Bicycle(QPoint pos, double theta, double wheelBase, double phiMax);
    void setPos(QPoint pos);
    QPoint getPos();
    void setTheta(short int theta);
    double getTheta();
    void setWheelBase(double wheelBase);
    double getWheelBase();
    void setPhiMax(short int phiMax);
    double getPhiMax();
    // update bicycle state by incrementing it's postion in X-Axis and Y-Axis and incrementing it's theta
    void update(double dx, double dy, double dtheta, double dt);
    // run the next dt seconds given current velocity and phi
    QPair<QPoint, double> run(double v, double phi, double dt);
};

#endif // BICYCLE_H
