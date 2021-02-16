#ifndef SYSTEM_H
#define SYSTEM_H
#include <QObject>
#include <QTimer>
#include "card.h"
#include <QGraphicsScene>
#include <QGraphicsView>

class SYSTEM: public QGraphicsView
{
    Q_OBJECT
public:
    SYSTEM(QWidget * parent=nullptr);
    QGraphicsScene * scene;
    CARD * card;
    QTimer * spawnCard;

    int getX();
    int getY();
    int getCtr();
    void spawnPop();
    int getRctr();
    void setRctr(int x);
    void setGS(int x);
    int getGS();
    void setCtr(int x);
public slots:
    void spawnElements();
private:
    int gameSTAGE = 0;
    int ctr = 0;
    int x_pos = 35;
    int y_pos = 200;
    int rctr;
};

#endif // SYSTEM_H

