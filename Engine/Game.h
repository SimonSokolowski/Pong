#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "UserLine.h"
#include "User2Line.h"
#include "ComputerLine.h"
#include "Ball.h"
#include "Welcome.h"
#include "Score.h"

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
	User2Line user2line;
	ComputerLine computerline;
	Ball ball;
	Score score;
	Welcome welcome;

	bool singlePlayer = false;
	bool multiPlayer = false;
	bool started = false;
};