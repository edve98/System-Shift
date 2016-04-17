#ifndef ENEMY_H
#define ENEMY_H


#include "Player.h"


class Enemy{
	
	private:
		
		int hitPwr;
		
		bool goX = true;
	
	public:
		int x, y;
		int health;
		
		void totallyNotConstructor(int hitPwr, int health);
		void step(Player *player);
	
};

#endif
