#include "pch.h"
#include <iostream>
#include "Map.h"
#include "Player.h"


int main()
{
	Map map = Map();
	Player player = Player();
	map.PlacePlayer(player.posX, player.posY, player.newPosX, player.newPosY);
	while (true)
	{
		
		map.PrintMap();
		player.PrintPlayerInfo();
		int obstacle = map.CheckTile(player.newPosX, player.newPosY);
		player.PlayerAction();
		map.PlacePlayer(player.posX,player.posY,player.newPosX,player.newPosY);
		player.MovePlayer(obstacle);
	}
}

