#pragma once
#include "Graphics.h"
#include "Ball.h"

class ComputerLine
{
public:
	void Update(Graphics& gfx,Ball& ball);
private:
	int xPos = 760;
	const int vy = 2;
	const int r = 255;
	const int g = 255;
	const int b = 255;
};