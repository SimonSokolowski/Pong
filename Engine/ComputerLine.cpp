#include "ComputerLine.h"

void ComputerLine::Update(Graphics& gfx, Ball& ball)
{
	int height = 75 + ball.GetyPos();
	int width = 5 + xPos;
	int yPos = ball.GetyPos() - 75;

	if (yPos <= 0)
	{
		yPos = 2;
		height = 150;
	}
	if (height>= gfx.ScreenHeight)
	{
		height = 600;
		yPos = 450;
	}

	if (ball.GetxPos() >= xPos)
	{
		ball.SetVX();
	}

	for (int x = xPos; x < width; ++x)
	{
		for (int y = yPos; y < height; ++y)
		{
			gfx.PutPixel(x, y, r, g, b);
		}
	}
}
