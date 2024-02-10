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
            TextureManager::Instance()->loadTexture("assets/two.png","png2", renderer);
            TextureManager::Instance()->loadTexture("assets/three.png","png3", renderer);
            TextureManager::Instance()->loadTexture("assets/four.png","png4", renderer);
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
    SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);

    SDL_RenderClear(renderer);


    int ww, wh;
    SDL_GetWindowSize(window, &ww, &wh);

    /*SDL_Rect fillRect = { ww / 4, wh / 4, ww / 2, wh / 2 };
    SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF);
    SDL_RenderFillRect(renderer, &fillRect);*/

    drawByThickness(30);

    /*SDL_Rect outlineRectz = {ww / 6, wh / 6, ww * 2 / 3, wh * 2 / 3};
    SDL_SetRenderDrawColor(renderer, 0x00, 0xFF, 0x00, 0xFF);
    SDL_RenderDrawRect(renderer, &outlineRectz);*/

    /*SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0xFF, 0xFF);
    SDL_RenderDrawLine(renderer, 0, wh / 2, ww, wh / 2);
    SDL_RenderDrawLine(renderer, ww / 2, 0, ww / 2, wh);*/

    /*SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0x00, 0xFF);
    for (int i = 0; i < wh; i += 4) {
        SDL_RenderDrawPoint(renderer, ww / 2, i);
    }*/

    /*SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF);
    Shapes::drawCircle(renderer, ww / 2, wh / 2, 250);*/
    //Shapes::drawTriangle(renderer, ww / 2, wh / 2, 201);

    /*Shapes::drawHexagon(renderer, ww / 2, wh / 2, 198);
    Shapes::drawHexagon(renderer, ww / 2, wh / 2, 199);
    Shapes::drawHexagon(renderer, ww / 2, wh / 2, 200);
    Shapes::drawHexagon(renderer, ww / 2, wh / 2, 201);
    Shapes::drawHexagon(renderer, ww / 2, wh / 2, 202);*/


    /*Shapes::drawPentagon(renderer, ww / 2, wh / 2, 300);
    Shapes::drawPentagon(renderer, ww / 2, wh / 2, 301);
    Shapes::drawPentagon(renderer, ww / 2, wh / 2, 302);
    Shapes::drawPentagon(renderer, ww / 2, wh / 2, 299);
    Shapes::drawPentagon(renderer, ww / 2, wh / 2, 298);*/

    //SDL_RenderCopy(renderer, texture, &sourceRectangle, &destinationRectangle);
    
    /*if (windws[0]) {

    TextureManager::Instance()->drawTexture("png", ww / 4 - 100,  wh / 4 - 100, 200, 200, renderer);
    }
    else {
    SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
    SDL_Rect recti = { 0, 0, ww / 2, wh / 2 };
    SDL_RenderFillRect(renderer, &recti);
    }
    if (windws[1]) {
        TextureManager::Instance()->drawTexture("png4", ww * 0.75 - 100, wh / 4 - 100, 200, 200, renderer);

    }
    else {
        SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
        SDL_Rect rectii = { ww / 2 + 3, wh / 2 + 3, ww, wh };
        SDL_RenderFillRect(renderer, &rectii);
    }

    if (windws[2]) {
        TextureManager::Instance()->drawTexture("png3", ww / 4 - 100, wh * 0.75 - 100, 200, 200, renderer);

    }
    else {
        SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
        SDL_Rect rectiii = { ww, wh / 2, ww / 2 - 3, wh / 2 };
        SDL_RenderFillRect(renderer, &rectiii);
    }
    if (windws[3]) {

    TextureManager::Instance()->drawTexture("png2", ww * 0.75 - 100, wh / 2 + 50, 200, 200, renderer);
    }
    else {
        SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
        SDL_Rect recto= { ww / 2 + 2, wh / 2 + 2, ww, wh };
        SDL_RenderFillRect(renderer, &recto);
    }*/
    //TextureManager::Instance()->drawTexture("sprite", 200, 200, 200, 200, renderer, SDL_FLIP_HORIZONTAL);
    
    //TextureManager::Instance()->drawOneFrameFromTexture("sprite", 20, 20, 130, 130, currentRow, currentFrame, renderer);
    //TextureManager::Instance()->drawOneFrameFromTexture("foxer", 20, 20, 102, 126, currentRow, currentFrame, renderer);
    /*SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF); 
    SDL_Rect recti = { 0, 0, ww / 2, wh / 2 }; 
    SDL_RenderFillRect(renderer, &recti);*/


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
                int ww, wh;
                SDL_GetWindowSize(window, &ww, &wh);
                if (msx < ww / 2 && msy < wh / 2) {
                    if (windws[0]) {
                        windws[0] = false;
                       
                    }
                    else {
                        windws[0] = true;
                    }
                }
                else if (msx > ww / 2 && msy < wh / 2) {
                    if (windws[1]) {
                        windws[1] = false;

                    }
                    else {
                        windws[1] = true;
                    }
                }
                else if (msx < ww / 2 && msy > wh / 2) {

                    if (windws[2]) {
                        windws[2] = false;

                    }
                    else {
                        windws[2] = true;
                    }
                }
                else if (msx > ww / 2 && msy > wh / 2) {

                    if (windws[3]) {
                        windws[3] = false;

                    }
                    else {
                        windws[3] = true;
                    }
                }

            }
        }break;
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
