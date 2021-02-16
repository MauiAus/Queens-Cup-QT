#include "rule.h"
#include "system.h"
#include <QDebug>

extern SYSTEM * sys;
RULE::RULE(QGraphicsPixmapItem *parent)
{
    setPos(0,0);
    int s = sys->getRctr();
    addImage(s);
}

void RULE::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    int x = sys->getCtr();
    qDebug() << x;
    x--;
    sys->setCtr(x);
    if(x == 0)
    {
        sys->setRctr(14);
        sys->spawnPop();
    }
    sys->scene->removeItem(this);
}

void RULE::addImage(int s)
{
    switch (s)
    {
        case 1:
            setPixmap(QPixmap(":/cards/CARDS/1.png").scaled(800,600,Qt::KeepAspectRatio));
            break;
        case 2:
            setPixmap(QPixmap(":/cards/CARDS/2.png").scaled(800,600,Qt::KeepAspectRatio));
            break;
        case 3:
            setPixmap(QPixmap(":/cards/CARDS/3.png").scaled(800,600,Qt::KeepAspectRatio));
            break;
        case 4:
            setPixmap(QPixmap(":/cards/CARDS/4.png").scaled(800,600,Qt::KeepAspectRatio));
            break;
        case 5:
            setPixmap(QPixmap(":/cards/CARDS/5.png").scaled(800,600,Qt::KeepAspectRatio));
            break;
        case 6:
        setPixmap(QPixmap(":/cards/CARDS/6.png").scaled(800,600,Qt::KeepAspectRatio));
            break;
        case 7:
        setPixmap(QPixmap(":/cards/CARDS/7.png").scaled(800,600,Qt::KeepAspectRatio));
            break;
        case 8:
        setPixmap(QPixmap(":/cards/CARDS/8.png").scaled(800,600,Qt::KeepAspectRatio));
            break;
        case 9:
        setPixmap(QPixmap(":/cards/CARDS/9.png").scaled(800,600,Qt::KeepAspectRatio));
            break;
        case 10:
        setPixmap(QPixmap(":/cards/CARDS/10.png").scaled(800,600,Qt::KeepAspectRatio));
            break;
        case 11:
        setPixmap(QPixmap(":/cards/CARDS/11.png").scaled(800,600,Qt::KeepAspectRatio));
            break;
        case 12:
        setPixmap(QPixmap(":/cards/CARDS/12.png").scaled(800,600,Qt::KeepAspectRatio));
            break;
        case 13:
        setPixmap(QPixmap(":/cards/CARDS/13.png").scaled(800,600,Qt::KeepAspectRatio));
            break;
        case 14:
        setPixmap(QPixmap(":/cards/CARDS/over.png").scaled(800,600,Qt::KeepAspectRatio));
        break;
        default:
            break;
    }
}

