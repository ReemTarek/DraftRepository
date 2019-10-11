#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QtGui>
#include <QtCore>
#include <QPushButton>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    //void connectToGui();
    //void setupBoard();
    ~Widget();
public slots:
//    void addFreeSlot();
   // void addOccupiedSlot();
   // void TargetSlot();
    //void addObstacle();


private slots:
    void on_FreeSlot_clicked();

    void on_BusySlot_clicked();

    void on_TargetSlot_clicked();

    void on_Obstacle_clicked();

private:
    Ui::Widget *ui;
    QPushButton *freeslot;
    QGraphicsScene *scene;
    QGraphicsView *view;


};

#endif // WIDGET_H
