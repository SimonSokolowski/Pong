#pragma once
#include "Graphics.h"

class Ball
{
public:
	void Update(Graphics& gfx);
	int xPos = 200;
	int yPos = 200;
	int width = 8;
	int height = 8;
	int r = 255;
	int g = 255;
	int b = 255;
	int vy = 2;
	int vx = 2;
};

