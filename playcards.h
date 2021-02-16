#ifndef PLAYCARDS_H
#define PLAYCARDS_H
#include "card.h"
#include <QObject>
class PLAYCARDS: public CARD
{
public:
    PLAYCARDS(QGraphicsRectItem *parent=nullptr);
    void mousePressEvent(QGraphicsSceneMouseEvent * event);
private:
    int cardNum;
};


#endif // PLAYCARDS_H
