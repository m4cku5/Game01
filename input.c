#include "input.h"

void processInput(void) {

    SDL_Event event;

    // Handle events on queue.
    while(SDL_PollEvent(&event) != 0) {

        switch(event.type) {

            // User requests quit.
            case SDL_QUIT:
                
                exit(0);
                break;

            default:

                break;

        }

    }

}