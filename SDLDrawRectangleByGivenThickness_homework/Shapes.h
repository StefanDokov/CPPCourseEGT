#pragma once
#include "Game.h"

class Shapes {

public:
	static void drawCircle(SDL_Renderer* renderer, int centerX, int centerY,
		int radius);
	static void drawPentagon(SDL_Renderer* renderer, int centerX, int centerY, int side);
	static void drawHexagon(SDL_Renderer* renderer, int centerX, int centerY, int side);
	static void drawTriangle(SDL_Renderer* renderer, int centerX, int centerY, int side);

};
