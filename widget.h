#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QtGui>
#include <QtCore>
#include <QPushButton>
#include<car.h>
#include<set>
#include<targetslot.h>

using namespace std;
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
    QTimer *timer;



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

    void on_TargetSlot_2_clicked();

    void on_TargetSlot_3_clicked();

    void on_TargetSlot_4_clicked();

    void on_FreeSlot_2_clicked();

    void on_FreeSlot_3_clicked();

    void on_FreeSlot_4_clicked();

    void on_BusySlot_2_clicked();

    void on_BusySlot_3_clicked();

    void on_BusySlot_4_clicked();

    void Run();
    void on_move_to_target_clicked();

    //void on_Change_Direction_clicked();
    void move_up();
    void move_down();
    void move_left();
    void move_right();
    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();


private:
    Ui::Widget *ui;
    QPushButton *freeslot;
    QGraphicsScene *scene;
    QGraphicsView *view;
    Car *car;
    TargetSlot *targetSlot;


};

#endif // WIDGET_HH
