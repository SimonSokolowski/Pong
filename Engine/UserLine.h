#pragma once
#include "Graphics.h"
#include "MainWindow.h"
#include "Ball.h"

class UserLine
{
public:
	void Update(MainWindow& wnd, Ball& ball);
	void Move(MainWindow& wnd);
	void Draw(Graphics& gfx) const;
	void SetCount();
	int GetCount();
private:
	int xPos = 40;
	int yPos = 50;
	int count = 0;
	const int r = 255;
	const int g = 255;
	const int b = 255;
	const int vy = 2;
	const int height = 150;
	const int width = 5;
};

