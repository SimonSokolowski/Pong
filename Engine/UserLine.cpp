#include "UserLine.h"

void UserLine::Update(MainWindow& wnd, Ball& ball)
{
	if (yPos <= 0)
	{
		yPos = 2;
	}
	if (height + yPos >= Graphics::ScreenHeight)
	{
		yPos -= 2;
	}

	if ((ball.GetxPos() <= width + xPos) && (ball.GetyPos() <= height - 2 + yPos)
		&& (ball.GetyPos() >= yPos + 2))
	{
		ball.SetVX();
		count += 20;
	}
}

void UserLine::Move(MainWindow& wnd)
{
	if (wnd.kbd.KeyIsPressed(VK_UP))
	{
		yPos -= vy;
	}
	if (wnd.kbd.KeyIsPressed(VK_DOWN))
	{
		yPos += vy;
	}
}

void UserLine::Draw(Graphics& gfx) const
{
	for (int x = xPos; x < width + xPos; ++x)
	{
		for (int y = yPos; y < height + yPos; ++y)
		{
			gfx.PutPixel(x, y, r, g, b);
		}
	}
}

void UserLine::SetCount()
{
	count = 0;
}


int UserLine::GetCount()
{
	return count;
}
