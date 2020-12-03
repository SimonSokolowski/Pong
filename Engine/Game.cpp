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
	userline.Update(gfx, wnd, ball);
	computerline.Update(gfx, ball);

	ball.Update(gfx);
}

void Game::ComposeFrame()
{
}
