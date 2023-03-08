#include <stdio.h>
#include <SDL2/SDL.h>

SDL_Window *win;
SDL_Renderer *ren;





int initRen(int w, int h)
	{
		win = SDL_CreateWindow("decay", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, w, h, SDL_WINDOW_SHOWN);
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
		SDL_RenderClear(ren);
		SDL_RenderPresent(ren);
	}

