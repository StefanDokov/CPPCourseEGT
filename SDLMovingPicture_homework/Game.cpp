#include "Game.h"
using namespace std;

int c = 0;

Game::Game()
{
    Game::window = NULL;
    Game::renderer = NULL;
    Game::running = true;
    Game::flip = SDL_FLIP_NONE;
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
                SDL_SetRenderDrawColor(renderer, 170, 51, 106, 50);

                SDL_Surface* tempSurface = IMG_Load("assets/easy.png");

                texture = SDL_CreateTextureFromSurface(renderer, tempSurface);

                SDL_FreeSurface(tempSurface);


                SDL_QueryTexture(texture, NULL, NULL, &sourceRectangle.w, &sourceRectangle.h);
                int sx, sy;
                SDL_GetWindowSize(window, &sx, &sy);
                destinationRectangle.x = 0;
                destinationRectangle.y = sy / 2 - sourceRectangle.h / 2;

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
    SDL_RenderCopyEx(renderer, texture, &sourceRectangle, &destinationRectangle, 0, 0, flip);
    SDL_RenderPresent(renderer);
}
bool pointTo = true;
int speeder = 150;
void Game::update()
{
    int sx, sy;
    SDL_GetWindowSize(window, &sx, &sy);
    c++;
    if (c % speeder == 0) {
        if (pointTo == true && (destinationRectangle.x + sourceRectangle.w <= sx)) {
            flip = SDL_FLIP_NONE;
            destinationRectangle.x++;
            if (destinationRectangle.x + sourceRectangle.w == sx) {
               
                pointTo = false;
                speeder -= 10;
            }
        }
        
        if (pointTo == false && (destinationRectangle.x >= 0)) {
            flip = SDL_FLIP_HORIZONTAL;
            destinationRectangle.x--;
            if (destinationRectangle.x == 0) {
               
                pointTo = true;
                speeder -= 10;
            }
        }

        if (speeder == 0) {
            speeder = 150;
        }
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
