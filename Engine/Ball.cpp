#include "Ball.h"

void Ball::Update(Graphics& gfx)
{
	if ((yPos <= 0) || (yPos + height>= gfx.ScreenHeight))
	{
		vy = -vy;
	}
	else if ((xPos <= 0) || (xPos + width >= gfx.ScreenWidth))
	{
		vx = 0;
	}

	xPos += vx;
	yPos += vy;

	if (vx != 0)
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
