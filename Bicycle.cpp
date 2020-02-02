#include "Bicycle.h"

Bicycle::Bicycle()
{
    pos.rx() = 0;
    pos.ry() = 0;
    wheelBase = NULL;
    phiMax = NULL;
    theta = NULL;
}

Bicycle::Bicycle(QPoint pos, double theta, double wheelBase, double phiMax)
{
    this->pos = pos;
    this->wheelBase = wheelBase;
    this->phiMax = phiMax;
    this->theta = theta;
}


void Bicycle::setPos(QPoint pos) {
    this->pos = pos;
}
QPoint Bicycle::getPos() {
    return pos;
}

void Bicycle::setTheta(double theta) {
    this->theta = theta;
}

double Bicycle::getTheta() {
    return theta;
}

void Bicycle::setWheelBase(double wheelBase) {
    this->wheelBase = wheelBase;
}

double Bicycle::getWheelBase() {
    return wheelBase;
}

void Bicycle::setPhiMax(double phiMax) {
    this->phiMax = phiMax;
}

double Bicycle::getPhiMax() {
    return phiMax;
}

void Bicycle::update(double dx, double dy, double dtheta, double dt) {
    pos.rx() += dx * dt * 1000;
    pos.ry() += dy * dt * 1000;
    theta += dtheta * dt;
}

QPair<QPoint, double> Bicycle::run(double v, double phi, double dt) {
    if (phi > phiMax)
        phi = phiMax;
    if (phi < -phiMax)
        phi = -phiMax;
    auto dx = v * cos(theta);
    auto dy = v * sin(theta);
    auto dtheta = v / wheelBase * tan(phi);
    update(dx, dy, dtheta, dt);
    return {pos, theta};
}
