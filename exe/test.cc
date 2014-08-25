/*
 * test file for SDL functionnalities
 */


#include "SDL2/SDL.h"
#include <iostream>
#include <cstdio>

//define declarations for configuration
#define HEIGHT 600
#define WEIGHT 800

int main(int argc, char ** argv)
{

	SDL_Window* fenetre(0);

	// Initialisation de la SDL

	if(SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		std::cout << "Erreur lors de l'initialisation de la SDL : " << SDL_GetError() << std::endl;
		SDL_Quit();
		return -1;
	}

	// Création de la fenêtre

	fenetre = SDL_CreateWindow("Test SDL 2.0", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WEIGHT, HEIGHT, SDL_WINDOW_SHOWN);

	//wait 3s before close
	SDL_Delay(3000);


	// On quitte la SDL

	SDL_DestroyWindow(fenetre);
	SDL_Quit();

	return 0;
}
