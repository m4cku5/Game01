#include "main.h"

int main(int argc, char *argv[]) {

    initSDL();

    while(1) {

        prepareScene();
        processInput();
        // update();
        // render();

    }

    return EXIT_SUCCESS;

}