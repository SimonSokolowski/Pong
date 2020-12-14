#pragma once
#include "Graphics.h"
#include "MainWindow.h"
#include "Ball.h"

class User2Line
{
public:
	void Update(Ball& ball);
	void Draw(Graphics& gfx) const;
	void Move(MainWindow& wnd);
private:
	int xPos = 760;
	int yPos = 50;
	const int r = 255;
	const int g = 255;
	const int b = 255;
	const int vy = 2;
	const int height = 150;
	const int width = 5;

};

