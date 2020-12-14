#include "User2Line.h"

void User2Line::Update(Ball& ball)
{
	if (yPos <= 0)
	{
		yPos = 2;
	}
	if (height + yPos >= Graphics::ScreenHeight)
	{
		yPos -= 2;
	}

	if ((ball.GetxPos() + ball.GetWidth() >= xPos) && (ball.GetyPos() <= height + yPos)
		&& (ball.GetyPos() >= yPos))
	{
		ball.SetVX();
	}
}

void User2Line::Draw(Graphics& gfx) const
{
	for (int x = xPos; x < width + xPos; ++x)
	{
		for (int y = yPos; y < height + yPos; ++y)
		{
			gfx.PutPixel(x, y, r, g, b);
		}
	}
}

void User2Line::Move(MainWindow& wnd)
{
	if (wnd.kbd.KeyIsPressed('W'))
	{
		yPos -= vy;
	}
	if (wnd.kbd.KeyIsPressed('S'))
	{
		yPos += vy;
	}
}
