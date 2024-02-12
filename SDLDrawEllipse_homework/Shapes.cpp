#include "Shapes.h"
#include <cmath>

void Shapes::drawCircle(SDL_Renderer* renderer, int centerX, int centerY, int radius)
{
	const int diameter = radius * 2;

	int x = (radius - 1);
	int y = 0;
	int tx = 1;
	int ty = 1;
	int error = tx - diameter;


	while (x >= y) {
		SDL_RenderDrawPoint(renderer, centerX + x, centerY - y);
		SDL_RenderDrawPoint(renderer, centerX + x, centerY + y);
		SDL_RenderDrawPoint(renderer, centerX - x, centerY - y);
		SDL_RenderDrawPoint(renderer, centerX - x, centerY + y);
		SDL_RenderDrawPoint(renderer, centerX + y, centerY - x);
		SDL_RenderDrawPoint(renderer, centerX + y, centerY + x);
		SDL_RenderDrawPoint(renderer, centerX - y, centerY - x);
		SDL_RenderDrawPoint(renderer, centerX - y, centerY + x);

		if (error <= 0) {
			y++;
			error += ty;
			ty += 2;
		}

		if (error > 0) {
			x--;
			tx += 2;
			error += tx - diameter;
		}
	}
}

void Shapes::drawPentagon(SDL_Renderer* renderer, int centerX, int centerY, int side)
{
	double rr = side / (2.0 * sin(M_PI / 5.0));
	double top_x = centerX;
	double top_y = centerY - rr;

	double theta = atan2(centerY - top_y, top_x - centerX);
	for (int i = 0; i < 5; ++i) {
		double x1 = centerX + rr * cos(theta);
		double y1 = centerY - rr * sin(theta); 
		double x2 = centerX + rr * cos(theta + 2 * M_PI / 5);
		double y2 = centerY - rr * sin(theta + 2 * M_PI / 5);
		SDL_RenderDrawLine(renderer, (int)(x1), (int)(y1), (int)(x2), (int)(y2));
		theta += 2 * M_PI / 5;
	}
	
	
	
}



void Shapes::drawHexagon(SDL_Renderer* renderer, int centerX, int centerY, int side)
{
	double angle = M_PI / 6; 
	for (int i = 0; i < 6; ++i) {
		double x1 = centerX + side * cos(angle);
		double y1 = centerY - side * sin(angle);
		double x2 = centerX + side * cos(angle + M_PI / 3);
		double y2 = centerY - side * sin(angle + M_PI / 3);
		SDL_RenderDrawLine(renderer, (int)(x1), (int)(y1), (int)(x2), (int)(y2));
		angle += M_PI / 3;
	}
}

void Shapes::drawTriangle(SDL_Renderer* renderer, int centerX, int centerY, int side)
{
	double angle = M_PI / 2; 
	for (int i = 0; i < 3; ++i) {
		double x1 = centerX + side * cos(angle);
		double y1 = centerY - side * sin(angle); 
		double x2 = centerX + side * cos(angle + 2 * M_PI / 3);
		double y2 = centerY - side * sin(angle + 2 * M_PI / 3); 
		SDL_RenderDrawLine(renderer, (int)(x1), (int)(y1), (int)(x2), (int)(y2));
		angle += 2 * M_PI / 3; 
	}
}

void Shapes::drawEllipse(SDL_Renderer* renderer, int centerX, int centerY, int radiusX, int radiusY)
{
	double rx = radiusX;
	double ry = radiusY;
	double rxSq = rx * rx;
	double rySq = ry * ry;
	double x = 0, y = ry, p;
	double px = 0, py = 2 * rxSq * y;

	plotEllipsePoints(renderer, centerX, centerY, x, y);

	p = rySq - (rxSq * ry) + (0.25 * rxSq);
	while (px < py)
	{
		x++;
		px += 2 * rySq;
		if (p < 0)
			p += rySq + px;
		else
		{
			y--;
			py -= 2 * rxSq;
			p += rySq + px - py;
		}
		plotEllipsePoints(renderer, centerX, centerY, x, y);
	}

	p = rySq * (x + 0.5) * (x + 0.5) + rxSq * (y - 1) * (y - 1) - rxSq * rySq;
	while (y > 0)
	{
		y--;
		py -= 2 * rxSq;
		if (p > 0)
			p += rxSq - py;
		else
		{
			x++;
			px += 2 * rySq;
			p += rxSq - py + px;
		}
		plotEllipsePoints(renderer, centerX, centerY, x, y);
	}
	
}

void Shapes::plotEllipsePoints(SDL_Renderer* renderer, int centerX, int centerY, int x, int y)
{
	SDL_RenderDrawPoint(renderer, centerX + x, centerY + y);
	SDL_RenderDrawPoint(renderer, centerX - x, centerY + y);
	SDL_RenderDrawPoint(renderer, centerX + x, centerY - y);
	SDL_RenderDrawPoint(renderer, centerX - x, centerY - y);
}