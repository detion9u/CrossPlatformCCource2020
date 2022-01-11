#include <stdio.h>
#include <SDL2/SDL.h>

int main(void) {
	if(SDL_Init(SDL_INIT_VIDEO))
	{
		SDL_Log("Can not init videl, %s", SDL_GetError());
		return 1;
	}

	SDL_Window * win = SDL_CreateWindow("Hello World",
			                            SDL_WINDOWPOS_CENTERED,
										SDL_WINDOWPOS_CENTERED,
			                            400, 300, SDL_WINDOW_SHOWN);

	if(win == NULL)
	{
		SDL_Log("Can not create window, %s", SDL_GetError());
		return 2;
	}

	//事件循环
	while(1)
	{
		SDL_Event event;
		if(SDL_PollEvent(&event))
		{
			printf("event type, %d\n", event.type);
		}
	}

	SDL_Delay(3000);
	SDL_DestroyWindow(win);
	printf("Hello world\n");
	return 0;
}
