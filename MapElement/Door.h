#ifndef DOOR_H
#define DOOR_H

#include "MapElement.h"

class MapProto;

class Door : public MapElement
{
    public:
        Door(int key);
        virtual ~Door();

        virtual bool isAWall()const;
        virtual bool doActionOnEnter()const;
        virtual bool doActionOnAction() const {return true;}
        virtual bool isACombatZone() const {return false;}

        virtual int action();
        void remplace(int dest,MapProto* val){remplaceant=dest;map=val;}

    protected:

    private:
		int keyNumber;
		//position tile to change on open
		int remplaceant;

		MapProto* map;
};

#endif // DOOR_H
