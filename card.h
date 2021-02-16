#ifndef CARD_H
#define CARD_H
#include <QGraphicsPixmapItem>
#include <QStack>

class CARD: public QGraphicsPixmapItem
{
public:
    CARD(QGraphicsPixmapItem * parent=nullptr);
    void dealCards();
    void addImage(int x, int y);
    int getSUIT();
    int getVAL();
    void stackPOP();
private:
    int SUIT[52];
    int VAL[52];
    QStack<int> CSUIT;
    QStack<int> CVAL;


};

#endif // CARD_H
