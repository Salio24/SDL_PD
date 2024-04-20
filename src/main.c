#include <stdio.h>
#include <stdbool.h>
#include <glad/glad.h>
#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>

#include "engine/global.h"

int main(int argc, char** args) {
    render_init();
    
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
        render_begin();
        
        render_quad(
            (vec2){global.render.width * 0.5, global.render.height * 0.5},
            (vec2){50, 50},
            (vec4){1, 1, 1, 1,});
        
        render_end();
    }
    return 0;
}