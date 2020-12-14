#include "Ball.h"

void Ball::Update(Graphics& gfx)
{	
	if ((yPos <= 0) || (yPos + height>= gfx.ScreenHeight))
	{
		vY = -vY;
	}
	else if ((xPos <= 0) || (xPos + width >= gfx.ScreenWidth))
	{
		roundEnd = true;
		vX = 0;
	}

	if (roundEnd)
	{
		vX = vx;
		vY = -vY;
		xPos = 200;
		yPos = 200;
	}

	xPos += vX;
	yPos += vY;

	if (vX != 0)
	{
		for (int x = xPos; x < xPos + width; ++x)
		{
			for (int y = yPos; y < yPos + height; ++y)
			{
				gfx.PutPixel(x, y, r, g, b);
			}
		}
	}
}

void Ball::SetVX()
{
	vX = -vX;
}

void Ball::SetRGB(MainWindow& wnd)
{
	if (wnd.kbd.KeyIsPressed('R'))
	{
		rainbow = !rainbow;
	}
	
	if (rainbow)
	{
		std::random_device rd;
		std::mt19937 rng(rd());
		std::uniform_int_distribution<int> rainbow(10, 250);

		r = rainbow(rng);
		g = rainbow(rng);
		b = rainbow(rng);
	}
}

void Ball::SetRoundEnd()
{
	roundEnd = false;
}

int Ball::GetWidth()
{
	return width;
}

int Ball::GetxPos()
{
	return xPos;
}

int Ball::GetyPos()
{
	return yPos;
}

bool Ball::GetRoundEnd()
{
	return roundEnd;
}
