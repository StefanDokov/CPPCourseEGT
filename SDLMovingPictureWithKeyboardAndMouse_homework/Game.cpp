#include "Game.h"

using namespace std;

Game::Game()
{
    Game::window = NULL;
    Game::renderer = NULL;
    Game::running = true;
    Game::currentFrame = 0;
    Game::currentRow = 1;
    Game::windws = { true, true, true, true };
    
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


            TextureManager::Instance()->loadTexture("assets/one.png","png", renderer);
            /*TextureManager::Instance()->loadTexture("assets/two.png","png2", renderer);
            TextureManager::Instance()->loadTexture("assets/three.png","png3", renderer);
            TextureManager::Instance()->loadTexture("assets/four.png","png4", renderer);*/
            //TextureManager::Instance()->loadTexture("assets/spriter.jpeg","sprite", renderer);
            //TextureManager::Instance()->loadTexture("assets/fox.jpeg","foxer", renderer);


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
    SDL_SetRenderDrawColor(renderer, 210, 105, 30, 255);

    SDL_RenderClear(renderer);


   
    TextureManager::Instance()->drawTexture("png", dRectFont, renderer);


    SDL_RenderPresent(renderer);


    
}

void Game::update()
{
    
    


}

void Game::handleEvents()
{
    SDL_Event event;
    if (SDL_PollEvent(&event)) {
        switch (event.type) {
        case SDL_QUIT:
            running = false;
            break;
        case SDL_MOUSEBUTTONDOWN: {
            int msx, msy;
            if (event.button.button == SDL_BUTTON_LEFT) {
                SDL_GetMouseState(&msx, &msy);
                mouseDownX = msx;
                mouseDownY = msy;

            }
        }break;
        case SDL_MOUSEBUTTONUP: {
            int msx, msy;
            //cout << "Mouse button up\n";
            if (event.button.button = SDL_BUTTON_LEFT) {
                SDL_GetMouseState(&msx, &msy);
                cout << msx << ":" << msy << endl;
                dRectFont.x = msx - 100;
                dRectFont.y = msy - 100;

            }
        }break;
        case SDL_KEYDOWN: {

            if (event.key.keysym.sym == SDLK_RIGHT) {
                dRectFont.x += 10;
            }
            if (event.key.keysym.sym == SDLK_LEFT) {
                dRectFont.x -= 10;

            }
            if (event.key.keysym.sym == SDLK_UP) {
                dRectFont.y -= 10;

            }
            if (event.key.keysym.sym == SDLK_DOWN) {
                dRectFont.y += 10;

            }
            if (event.key.keysym.sym == SDLK_SPACE) {
                int ww, wh;
                SDL_GetWindowSize(window, &ww, &wh);
                dRectFont.x = ww / 2 - 100;
                dRectFont.y = wh / 2 - 100;
            }

        }break;
        default:
            break;
        }
    }
}

bool Game::ttf_init()
{
    if (TTF_Init() == -1) {
        return false;
    }
    int ww, wh;
    SDL_GetWindowSize(window, &ww, &wh);
    dRectFont.x = ww / 2 - 100;
    dRectFont.y = wh / 2 - 100;
    dRectFont.w = 200;
    dRectFont.h = 200;

    return true;

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

void Game::drawByThickness(int n)
{
    int ww, wh;
    SDL_GetWindowSize(window, &ww, &wh);

    SDL_Rect fillRect = { ww / 4, wh / 4, ww / 2, wh / 2 };
    SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF);
    SDL_RenderFillRect(renderer, &fillRect);

    SDL_Rect fillRecto = { fillRect.x + n, fillRect.y + n, fillRect.w - n * 2, fillRect.h - n * 2 };
    SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
    SDL_RenderFillRect(renderer, &fillRecto);
}
