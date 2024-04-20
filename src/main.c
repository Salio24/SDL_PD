#include <stdio.h>
#include <stdbool.h>
#include <glad/glad.h>
#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <types.h>


int main(int argc, char** args) {

    
    bool shouldQuit = false;

    while(!shouldQuit){
        SDL_Event event;

        while (SDL_PollEvent(&event)) {
            switch (event.type) {
            case SDL_QUIT:
                shouldQuit = true;
                break;
            default:
                break;
            }
        }
    }
    return 0;
}