#pragma once
#include "Graphics.h"
#include "MainWindow.h"
#include <random>

class Ball
{
public:
	void Update(Graphics& gfx);
	void SetVX();
	void SetRGB(MainWindow& wnd);
	void SetRoundEnd();
	bool GetRoundEnd();
	int GetWidth();
	int GetxPos();
	int GetyPos();
private:
	int xPos = 200;
	int yPos = 200;
	const int vx = 2;
	const int vy = 2;
	int vX = vx;
	int vY = vy;
	int r = 173;
	int g = 0;
	int b = 0;
	bool roundEnd = false;
	bool rainbow = false;
	bool increaseValue = true;
	const int width = 8;
	const int height = 8;
};

