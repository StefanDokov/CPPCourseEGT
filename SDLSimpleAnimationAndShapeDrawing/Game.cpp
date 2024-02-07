#include "Game.h"

using namespace std;

Game::Game()
{
    Game::window = NULL;
    Game::renderer = NULL;
    Game::running = true;
    Game::currentFrame = 0;
    Game::currentRow = 1;
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
            SDL_SetRenderDrawColor(renderer, 255, 255, 255, 50);
        
            /*SDL_Surface* tempSurface = IMG_Load("assets/one.png");
        
            texture = SDL_CreateTextureFromSurface(renderer, tempSurface);
        
            SDL_FreeSurface(tempSurface);


            SDL_QueryTexture(texture, NULL, NULL, &sourceRectangle.w, &sourceRectangle.h);
        
            destinationRectangle.x = sourceRectangle.x = 0;
            destinationRectangle.y = sourceRectangle.y = 0;

            destinationRectangle.x = 130;
            destinationRectangle.y = 105;

            sourceRectangle.x = 75;
            sourceRectangle.y = 75;

            destinationRectangle.w = sourceRectangle.w;
            destinationRectangle.h = sourceRectangle.h;*/


            //TextureManager::Instance()->loadTexture("assets/one.png","png", renderer);
            TextureManager::Instance()->loadTexture("assets/spriter.jpeg","sprite", renderer);
            TextureManager::Instance()->loadTexture("assets/fox.jpeg","foxer", renderer);


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
    SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);

    SDL_RenderClear(renderer);


    int ww, wh;
    SDL_GetWindowSize(window, &ww, &wh);
    SDL_Rect fillRect = { ww / 4, wh / 4, ww / 2, wh / 2 };
    SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF);
    SDL_RenderFillRect(renderer, &fillRect);

    SDL_Rect outlineRectz = { ww / 6, wh / 6, ww * 2 / 3, wh * 2 / 3 };
    SDL_SetRenderDrawColor(renderer, 0x00, 0xFF, 0x00, 0xFF);
    SDL_RenderDrawRect(renderer, &outlineRectz);

    SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0xFF, 0xFF);
    SDL_RenderDrawLine(renderer, 0, wh / 2, ww, wh / 2);

    SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0x00, 0xFF);
    for (int i = 0; i < wh; i += 4) {
        SDL_RenderDrawPoint(renderer, ww / 2, i);
    }

    SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0xFF, 0xFF);
    Shapes::drawCircle(renderer, ww / 2, wh / 2, 250);

    //SDL_RenderCopy(renderer, texture, &sourceRectangle, &destinationRectangle);
    //TextureManager::Instance()->drawTexture("png", 0, 0, 200, 200, renderer);
    //TextureManager::Instance()->drawTexture("sprite", 200, 200, 200, 200, renderer, SDL_FLIP_HORIZONTAL);
    
    //TextureManager::Instance()->drawOneFrameFromTexture("sprite", 20, 20, 130, 130, currentRow, currentFrame, renderer);
    //TextureManager::Instance()->drawOneFrameFromTexture("foxer", 20, 20, 102, 126, currentRow, currentFrame, renderer);
    
    SDL_RenderPresent(renderer);
}

void Game::update()
{
    std::cout << "SDL_TICKS           :" << SDL_GetTicks() << "\n";
    std::cout << "SDL_TICKS / 100     :" << int(SDL_GetTicks() / 100) << "\n";
    std::cout << "SDL_TICKS / 100 % 5: " << int(((SDL_GetTicks() / 100) % 5)) << "\n\n";
    
    currentFrame = int(((SDL_GetTicks() / 100) % 5)); // % 10 for 10 frames
    


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
