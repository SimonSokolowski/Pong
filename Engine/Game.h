#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "UserLine.h"
#include "ComputerLine.h"
#include "Ball.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();

private:
	void ComposeFrame();
	void UpdateModel();
private:
	MainWindow& wnd;
	Graphics gfx;
	UserLine userline;
	ComputerLine computerline;
	Ball ball;
};