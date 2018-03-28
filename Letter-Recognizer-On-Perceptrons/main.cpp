#include "header.h"
#include "Game.h"

int main()
{
	srand(time(NULL));
	Game game;
	game.loop();
	return 0;
}