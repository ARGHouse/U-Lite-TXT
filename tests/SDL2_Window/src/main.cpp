#include "Game.h"

Game *game = nullptr;

int main(int argc, char *argv[])
{
	game = new Game();

	game->init("U-Lite TXT - SDL Test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 720, 420, false);

	while (game->running()) {

		game->handleEvents();
		game->update();
		game->render();

	}

	game->clean();

	return 0;
}