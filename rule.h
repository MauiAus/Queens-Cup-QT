#ifndef RULE_H
#define RULE_H
#include <QGraphicsPixmapItem>
#include <QGraphicsSceneMouseEvent>

class RULE: public QGraphicsPixmapItem
{
public:
    RULE(QGraphicsPixmapItem *parent = nullptr);
    void mousePressEvent(QGraphicsSceneMouseEvent * event);
    void addImage(int s);
    void setNum(int x);
private:
    int num;
};

#endif // RULE_H
