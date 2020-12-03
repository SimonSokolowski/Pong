#pragma once
#include "Graphics.h"
#include "MainWindow.h"
#include "Ball.h"

class UserLine
{
public:
	void Update(Graphics& gfx, MainWindow& wnd, Ball& ball);
	int xPos = 40;
	int yPos = 50;
	int r = 255;
	int g = 255;
	int b = 255;
	int vy = 2;
};

