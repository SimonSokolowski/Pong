#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	if (!started)
	{
		welcome.Draw(gfx);
	}
	
	if (wnd.kbd.KeyIsPressed('1'))
	{
		singlePlayer = true;
		started = true;
	}
	else if (wnd.kbd.KeyIsPressed('2'))
	{
		multiPlayer = true;
		started = true;
	}

	if (singlePlayer)
	{
		computerline.Update(gfx, ball);

		userline.Update(wnd, ball);
		userline.Draw(gfx);
		userline.Move(wnd);

	    score.Update(gfx, userline, ball);

		ball.Update(gfx);
		ball.SetRGB(wnd);
	}
	else if (multiPlayer)
	{
		user2line.Update(ball);
		user2line.Draw(gfx);
		user2line.Move(wnd);

		userline.Update(wnd, ball);
		userline.Draw(gfx);
		userline.Move(wnd);

		ball.Update(gfx);
	}

}

void Game::ComposeFrame()
{
}
