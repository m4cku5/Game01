#include "draw.h"

void prepareScene(void) {

    SDL_SetRenderDrawColor(gRenderer, 32, 32, 32, 255);
    SDL_RenderClear(gRenderer);

}

void presentScene(void) {

    SDL_RenderPresent(gRenderer);

}