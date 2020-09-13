/* Todo:

* Research implications of using SDL_CreateWindowAndRenderer instead of both 
SDL_CreateWindow and SDL_CreateRenderer.

*/

#include "init.h"

int initSDL(void) {

    int rendererFlags = SDL_RENDERER_ACCELERATED;
    int windowFlags = 0;

    // Initialize SDL.
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {

		printf("Couldn't initialize SDL! Error: %s\n", SDL_GetError());
		return EXIT_FAILURE;

	}

    // Create window.
    gWindow = SDL_CreateWindow("Game01",                    // Window title.
                                SDL_WINDOWPOS_UNDEFINED,    // Initial X position.
                                SDL_WINDOWPOS_UNDEFINED,    // Initial Y position.
                                SCREEN_WIDTH,               // Width, in pixels.
                                SCREEN_HEIGHT,              // Height, in pixels.
                                windowFlags);               // Flags.

    if(gWindow == NULL) {

        printf("Couldn't create an SDL window! Error: %s\n", SDL_GetError());
        return EXIT_FAILURE;

    }

    // Create renderer.
    gRenderer = SDL_CreateRenderer(gWindow, -1, rendererFlags);

    if(gRenderer == NULL) {

        printf("Couldn't create the SDL renderer! Error: %s\n", SDL_GetError());
        return EXIT_FAILURE;

    }

}

void stopSDL(void) {

    // Destroy the renderer.
	SDL_DestroyRenderer(gRenderer);
    gRenderer = NULL;
	
    // Destroy the window.
	SDL_DestroyWindow(gWindow);
    gWindow = NULL;
	
    // Quit the SDL subsystem.
	SDL_Quit();

}