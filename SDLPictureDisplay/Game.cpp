#include "Game.h"
using namespace std;

int c = 0;
Game::Game()
{
    Game::window = NULL;
    Game::renderer = NULL;
    Game::running = true;
}

Game::~Game()
{
}

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags)
{

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        cout << "SDL init success\n";

    window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
    if (window != 0) {
        cout << "window creation success\n";
        renderer = SDL_CreateRenderer(window, -1, 0);
        if (renderer != 0) {
            cout << "renderer creation success\n";
            SDL_SetRenderDrawColor(renderer, 165, 165, 255, 50);
        
            SDL_Surface* tempSurface = SDL_LoadBMP("assets/easy.bmp");
        
            texture = SDL_CreateTextureFromSurface(renderer, tempSurface);
        
            SDL_FreeSurface(tempSurface);


            SDL_QueryTexture(texture, NULL, NULL, &sourceRectangle.w, &sourceRectangle.h);
        
            destinationRectangle.x = sourceRectangle.x = 0;
            destinationRectangle.y = sourceRectangle.y = 0;

          /*  destinationRectangle.x = 130;
            destinationRectangle.y = 105;*/

            /*sourceRectangle.x = 75;
            sourceRectangle.y = 75;*/

            destinationRectangle.w = sourceRectangle.w;
            destinationRectangle.h = sourceRectangle.h;
        }
        else {
            cout << "renderer init failed\n";
            return false;
        }
    }
    else {
        cout << "window init failed\n";
        return false;
    }
    }
    else {
        cout << "SDL init fail\n";
        return false;
    }
    cout << "init success\n";
    running = true;
    return true;

}

void Game::render()
{
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, &sourceRectangle, &destinationRectangle);
    SDL_RenderPresent(renderer);
}

void Game::update()
{
    c++;
    if (c % 50 == 0) {
        destinationRectangle.x++;
        destinationRectangle.y++;
    }
}

void Game::handleEvents()
{
    SDL_Event event;
    if (SDL_PollEvent(&event)) {
        switch (event.type) {
        case SDL_QUIT:
            running = false;
            break;
        default:
            break;
        }
    }
}

void Game::clean()
{
    cout << "cleaning game\n";
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
}

bool Game::isRunning()
{
    return this->running;
}
