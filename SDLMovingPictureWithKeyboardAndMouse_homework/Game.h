#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include "TextureManager.h"
#include "Shapes.h"
#include <vector>
#include <SDL_ttf.h>

class Game {
public:
	Game();
	~Game();

	bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
	void render();
	void update();
	void handleEvents();
	bool ttf_init();
	void clean();
	bool isRunning();
	void drawByThickness(int n);
	std::vector<bool> windws;
private:
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	bool running;
	int currentFrame;
	int currentRow;
	SDL_Rect dRectFont;
	int mouseDownX, mouseDownY;
};
