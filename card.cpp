#include "card.h"
#include <QDebug>
#include <algorithm>

CARD::CARD(QGraphicsPixmapItem *parent)
{
}

void CARD::dealCards()
{
    //set suit value
    int CTR = 0;
    for(int i = 1; i < 5; i++)
    {
        for(int j = 1; j < 14; j++)
        {
            SUIT[CTR] = i;
            VAL[CTR] = j;
            qDebug() << "CARD: " << SUIT[CTR] << " " << VAL[CTR];
            CTR++;
        }
    }
    int shuffle = rand() % 300;
    for(int i = 0; i < shuffle; i++)
    {
        std::random_shuffle(&VAL[0], &VAL[52]);
        std::random_shuffle(&SUIT[0], &SUIT[52]);
    }
    for(int i = 0; i < 52; i++)
    {
        qDebug() << "CARD: " << SUIT[i] << " " << VAL[i];
        CSUIT.push(SUIT[i]);
        CVAL.push(VAL[i]);
    }
}

void CARD::addImage(int x, int y)
{
  //  int cCard = x;
    int cSuit = y;
    //qDebug() << "CARD: " << cCard << " " << cSuit;
    int cCard = 15;
    if(cCard == 1 && cSuit == 1)
        setPixmap(QPixmap(":/cards/CARDS/ACECLUBS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 2 && cSuit == 1)
        setPixmap(QPixmap(":/cards/CARDS/2CLUBS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 3 && cSuit == 1)
        setPixmap(QPixmap(":/cards/CARDS/3CLUBS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 4 && cSuit == 1)
        setPixmap(QPixmap(":/cards/CARDS/4CLUBS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 5 && cSuit == 1)
        setPixmap(QPixmap(":/cards/CARDS/5CLUBS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 6 && cSuit == 1)
        setPixmap(QPixmap(":/cards/CARDS/6CLUBS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 7 && cSuit == 1)
        setPixmap(QPixmap(":/cards/CARDS/7CLUBS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 8 && cSuit == 1)
        setPixmap(QPixmap(":/cards/CARDS/8CLUBS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 9 && cSuit == 1)
        setPixmap(QPixmap(":/cards/CARDS/9CLUBS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 10 && cSuit == 1)
        setPixmap(QPixmap(":/cards/CARDS/10CLUBS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 11 && cSuit == 1)
        setPixmap(QPixmap(":/cards/CARDS/JACKCLUBS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 12 && cSuit == 1)
        setPixmap(QPixmap(":/cards/CARDS/QUEENCLUBS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 13 && cSuit == 1)
        setPixmap(QPixmap(":/cards/CARDS/KINGCLUBS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 1 && cSuit == 2)
        setPixmap(QPixmap(":/cards/CARDS/ACESPADES.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 2 && cSuit == 2)
        setPixmap(QPixmap(":/cards/CARDS/2SPADES.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 3 && cSuit == 2)
        setPixmap(QPixmap(":/cards/CARDS/3SPADES.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 4 && cSuit == 2)
        setPixmap(QPixmap(":/cards/CARDS/4SPADES.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 5 && cSuit == 2)
        setPixmap(QPixmap(":/cards/CARDS/5SPADES.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 6 && cSuit == 2)
        setPixmap(QPixmap(":/cards/CARDS/6SPADES.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 7 && cSuit == 2)
        setPixmap(QPixmap(":/cards/CARDS/7SPADES.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 8 && cSuit == 2)
        setPixmap(QPixmap(":/cards/CARDS/8SPADES.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 9 && cSuit == 2)
        setPixmap(QPixmap(":/cards/CARDS/9SPADES.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 10 && cSuit == 2)
        setPixmap(QPixmap(":/cards/CARDS/10SPADES.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 11 && cSuit == 2)
        setPixmap(QPixmap(":/cards/CARDS/JACKSPADES.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 12 && cSuit == 2)
        setPixmap(QPixmap(":/cards/CARDS/QUEENSPADES.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 13 && cSuit == 2)
        setPixmap(QPixmap(":/cards/CARDS/KINGSPADES.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 1 && cSuit == 3)
        setPixmap(QPixmap(":/cards/CARDS/ACEHEARTS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 2 && cSuit == 3)
        setPixmap(QPixmap(":/cards/CARDS/2HEARTS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 3 && cSuit == 3)
        setPixmap(QPixmap(":/cards/CARDS/3HEARTS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 4 && cSuit == 3)
        setPixmap(QPixmap(":/cards/CARDS/4HEARTS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 5 && cSuit == 3)
        setPixmap(QPixmap(":/cards/CARDS/5HEARTS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 6 && cSuit == 3)
        setPixmap(QPixmap(":/cards/CARDS/6HEARTS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 7 && cSuit == 3)
        setPixmap(QPixmap(":/cards/CARDS/7HEARTS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 8 && cSuit == 3)
        setPixmap(QPixmap(":/cards/CARDS/8HEARTS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 9 && cSuit == 3)
        setPixmap(QPixmap(":/cards/CARDS/9HEARTS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 10 && cSuit == 3)
        setPixmap(QPixmap(":/cards/CARDS/10HEARTS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 11 && cSuit == 3)
        setPixmap(QPixmap(":/cards/CARDS/JACKHEARTS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 12 && cSuit == 3)
        setPixmap(QPixmap(":/cards/CARDS/QUEENHEARTS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 13 && cSuit == 3)
        setPixmap(QPixmap(":/cards/CARDS/KINGHEARTS.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 1 && cSuit == 4)
        setPixmap(QPixmap(":/cards/CARDS/ACEDIAMOND.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 2 && cSuit == 4)
        setPixmap(QPixmap(":/cards/CARDS/2DIAMOND.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 3 && cSuit == 4)
        setPixmap(QPixmap(":/cards/CARDS/3DIAMOND.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 4 && cSuit == 4)
        setPixmap(QPixmap(":/cards/CARDS/4DIAMOND.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 5 && cSuit == 4)
        setPixmap(QPixmap(":/cards/CARDS/5DIAMOND.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 6 && cSuit == 4)
        setPixmap(QPixmap(":/cards/CARDS/6DIAMOND.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 7 && cSuit == 4)
        setPixmap(QPixmap(":/cards/CARDS/7DIAMOND.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 8 && cSuit == 4)
        setPixmap(QPixmap(":/cards/CARDS/8DIAMOND.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 9 && cSuit == 4)
        setPixmap(QPixmap(":/cards/CARDS/9DIAMOND.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 10 && cSuit == 4)
        setPixmap(QPixmap(":/cards/CARDS/10DIAMOND.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 11 && cSuit == 4)
        setPixmap(QPixmap(":/cards/CARDS/JACKDIAMOND.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 12 && cSuit == 4)
        setPixmap(QPixmap(":/cards/CARDS/QUEENDIAMOND.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 13 && cSuit == 4)
        setPixmap(QPixmap(":/cards/CARDS/KINGDIAMOND.png").scaled(120,120,Qt::KeepAspectRatio));
    if(cCard == 15)
        setPixmap(QPixmap(":/cards/CARDS/BackCard.png").scaled(120,120,Qt::KeepAspectRatio));
}

void CARD::stackPOP()
{
    CSUIT.pop();
    CVAL.pop();
}

int CARD::getSUIT()
{
    return CSUIT.top();
}

int CARD::getVAL()
{
    return CVAL.top();
}

