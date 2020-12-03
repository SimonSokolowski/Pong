#pragma once
#include "Graphics.h"
#include "Ball.h"

class ComputerLine
{
public:
	void Update(Graphics& gfx,Ball& ball);
	int xPos = 760;
	int r = 255;
	int g = 255;
	int b = 255;
	int vy = 2;
};