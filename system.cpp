#include "system.h"
#include "playcards.h"
#include "rule.h"
#include <QDebug>

SYSTEM::SYSTEM(QWidget *parent)
{
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);
    scene->setBackgroundBrush(QImage(":/cards/CARDS/Large_0348615.jpg"));
    setScene(scene);

    card = new CARD();
    card->dealCards();

    spawnCard = new QTimer();
    connect(spawnCard,SIGNAL(timeout()),this,SLOT(spawnElements()));
    spawnCard->start(100);
}

int SYSTEM::getX()
{
    return x_pos;
}

int SYSTEM::getY()
{
    return y_pos;
}

int SYSTEM::getCtr()
{
    return ctr;
}

void SYSTEM::spawnPop()
{
    RULE * rul = new RULE();
    scene->addItem(rul);
}

int SYSTEM::getRctr()
{
    return rctr;
}

void SYSTEM::setRctr(int x)
{
    rctr = x;
}

void SYSTEM::setGS(int x)
{
    gameSTAGE = x;
}

int SYSTEM::getGS()
{
    return gameSTAGE;
}

void SYSTEM::setCtr(int x)
{
    ctr = x;
}

void SYSTEM::spawnElements()
{
    if(ctr >= 51)
    {
        spawnCard->disconnect();
        gameSTAGE = 1;
    }
    PLAYCARDS * playc = new PLAYCARDS();
    scene->addItem(playc);
    qDebug() << "Spawned" << ctr;
    ctr++;
    x_pos = x_pos + 12;
}
