#pragma once
#include "Graphics.h"
#include "UserLine.h"
#include "Ball.h"

class Score
{
public:
	void Update(Graphics& gfx, UserLine& userline, Ball& ball);
private:
	const int x = 80;
	const int y = 10;
	const int r = 255;
	const int g = 255;
	const int b = 255;
	const int length = x + 50;
	const int height = y + 25;
};

