#include "UserLine.h"
void UserLine::Update(Graphics& gfx, MainWindow& wnd, Ball& ball)
{
	int height = 150 + yPos;
	int width = 5 + xPos;
	
	if (wnd.kbd.KeyIsPressed(VK_UP))
	{
		yPos -= vy;
	}
	if (wnd.kbd.KeyIsPressed(VK_DOWN))
	{
		yPos += vy;
	}
	
	if (yPos <= 0)
	{
		yPos = 2;
	}
	if (height >= gfx.ScreenHeight)
	{
		yPos -= 2;
	}

	if ((ball.xPos <= width) && (ball.yPos <= height) 
		&& (ball.yPos >= yPos))
	{
		ball.vx = -ball.vx;
	}
	
	for (int x = xPos; x < width; ++x)
	{
		for (int y = yPos; y < height; ++y)
		{
			gfx.PutPixel(x, y, r, g, b);
		}
	}
}