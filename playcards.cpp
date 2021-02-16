#include "playcards.h"
#include "system.h"
#include <QDebug>

extern SYSTEM * sys;
PLAYCARDS::PLAYCARDS(QGraphicsRectItem *parent)
{
    int x = sys->getX();
    int y = sys->getY();
    cardNum = sys->card->getVAL();
    setPos(x,y);
    //setRect(x,y,38,38);
    addImage(sys->card->getVAL(), sys->card->getSUIT());
    sys->card->stackPOP();
}

void PLAYCARDS::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(sys->getGS() == 1)
    {
    sys->setRctr(cardNum);
    sys->spawnPop();
    sys->scene->removeItem(this);
    }
}
