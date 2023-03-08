#include <stdio.h>
#include <stdbool.h>
#include <SDL2/SDL.h>

SDL_Window *win;
SDL_Renderer *ren;






int initRen()
	{
		win = SDL_CreateWindow("decay", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
		if(!win)
			{
				perror("could not create window");
				return 0;
	                }
		ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
		if(!ren)
			{
				perror("could not create renderer");
				return 0;
	                }
	}


void render()
	{
		SDL_SetRenderDrawColor(ren, 96, 128, 255, 255);
		SDL_RenderClear(ren);
		SDL_RenderPresent(ren);
	}

