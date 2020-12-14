#include "Score.h"

void Score::Update(Graphics& gfx, UserLine& userline, Ball& ball)
{
	if (!ball.GetRoundEnd())
	{
		for (int xx = x; xx < x + userline.GetCount(); ++xx)
		{
			for (int yy = y; yy < height; ++yy)
			{
				gfx.PutPixel(xx, yy, r, g, b);
			}
		}
	}
	else
	{
		userline.SetCount();
		ball.SetRoundEnd();
	}
	
}
