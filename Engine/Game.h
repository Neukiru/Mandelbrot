/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include <cmath>


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
	/********************************/
	int get_limit();
	/********************************/
	void Drawbrot(double center_x, double center_y, double zoom);
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */
	/********************************/
	double cx, cy, scale , ax, ay;
	double limit;
	double lp, a1, b1, a2, b2;

	int mobile_x, mobile_y;
	
	std::s
};


void randomizeSpeed()
{
	if (poospeed(rng) == 0)
	{
		poo1speed = 1;
		poo1dirx = 1 ;
		poo1diry = -1;
		poo2speed = 1
			poo1dirx = 1;
		poo1diry = -1;
	    poo3speed = 1

	}
	else if (poospeed(rng) == 1)
	{
		poo1speed = 1;
		poo2speed = 1
			poo3speed = 1
	}
	else if (poospeed(rng) == 2)
	{
		poo1speed = 1;
		poo2speed = 1
			poo3speed = 1
	}
	else if (poospeed(rng) == 3)
	{
		poo1speed = 1;
		poo2speed = 5;
			poo3speed = 5;
	}
}

int poo1speed;
poo1x += poo1dirx * poospeed;
poo1y += poo2diry * poospeed;



uniform_int_distribution<int> sign(0,1)
sign(rng)

