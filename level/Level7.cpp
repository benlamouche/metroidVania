#include "Level7.h"
#include <iostream>
#include "../Player.h"
#include "../MyGame.h"

#include "../Eni/Boss1.h"


#include "../Item/Key.h"
#include "../MapElement/Door.h"
#include "../MapElement/Sortie.h"

extern Game* game;

extern Player player;

Level7::Level7(): PlatformMap("data/map/wBoss.mp","data/map/warped.png")
{
    //ctor
}

Level7::~Level7()
{
    //dtor
}

void Level7::initEni()
{

    if(!player.key(4))enis.add(new Boss1(800,280));

    Door* doorR = new Door(4);
    doorR->remplace(0,this);
    addElement(doorR,11);

    Door* doorL = new Door(1);
    doorL->remplace(0,this);
    addElement(doorL,10);

    addElement(new Sortie(dynamic_cast<MyGame *>(game)->level(6),1100,256),3);
    addElement(new Sortie(dynamic_cast<MyGame *>(game)->level(8),52,256),4);
}
