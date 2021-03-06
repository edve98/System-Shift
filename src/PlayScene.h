#ifndef PLAYSCENE_H
#define PLAYSCENE_H


#include "Scene.h"
#include "Game.h"
#include "Room.h"
#include "Player.h"
#include "LoseScene.h"
#include "HelpScene.h"
#include "WinScene.h"


class LoseScene;


class PlayScene : public Scene{
	
	private:
		
		Player player;
		Room *lastRoom = new  Room(-10, -10, -1);
		Room *currentRoom = new  Room(-10, -10, -1);
		bool playerMoved = false;
		bool bulletIsMoving = false;
		int bulletDirX = 0, bulletDirY = 0;
		int bulletX, bulletY;
		char bulletLooks = '?'; //TODO add jostShot bool to make enemies step after explosion?
		int explosionState = 0;
		bool loadLose = false;
		bool loadWin = false;
		int score = 0;
	
	public:
		Game *game;
		LoseScene *loseScene;
		WinScene *winScene;
		HelpScene *helpScene;
		
		bool cam = true;
		PlayScene(Game *gamep, LoseScene *loseScene, WinScene *winScene, HelpScene *helpScene);
		void update();
		void draw();
	
};

#endif