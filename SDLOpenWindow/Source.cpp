#include <SDL.h>
#include <iostream>
using namespace std;
const int FPS = 30;

void limitFPS(Uint32 startingTick) {
    if ((1000 / FPS) > SDL_GetTicks() - startingTick) {
        SDL_Delay((1000 / FPS) - (SDL_GetTicks() - startingTick));
    }
}

int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window* window = NULL;
    SDL_Renderer* renderer = NULL;


    window = SDL_CreateWindow("Game", SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED, 600, 400, 0);

    renderer = SDL_CreateRenderer(window, -1, 0);
    SDL_SetRenderDrawColor(renderer, 0, 191, 255, 200);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);

    bool running = true;
    SDL_Event event;
    Uint32 startingTick;

    while (running) {
        startingTick = SDL_GetTicks();
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {

                running = false;
                break;
            }
        }
        limitFPS(startingTick);
    }


    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}