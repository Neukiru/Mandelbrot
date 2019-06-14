/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
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
#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd ),
	cx(0),
	cy(0),
	scale(0.002),
	limit(4)
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
	







}

void Game::Drawbrot(double center_x, double center_y, double zoom)
{
	for (int x = -gfx.ScreenWidth / 2; x < gfx.ScreenWidth / 2; x++)
		for (int y = -gfx.ScreenHeight / 2; y < gfx.ScreenHeight / 2; y++)
		{
			ax = center_x + x * zoom;
			ay = center_y + y * zoom;
			a1 = ax; b1 = ay; lp = 0;
			while ((lp <= 255) && ((a1 * a1 + b1 * b1) <= 4))
			{
				lp = lp + 1;
				a2 = a1 * a1 - b1 * b1 + ax;
				b2 = 2 * a1 * b1 + ay;
				a1 = a2;
				b1 = b2;


			}


			gfx.PutPixel(x + gfx.ScreenWidth / 2, y + gfx.ScreenHeight / 2, 0, 0, abs(255 - lp) + 50);

			if (lp >= 21 && lp < 55)
			{

				gfx.PutPixel(x + gfx.ScreenWidth / 2, y + gfx.ScreenHeight / 2, abs(255 - lp), 0, 0);
			}
			else if (lp >= 55 && lp <= 255)
			{


				gfx.PutPixel(x + gfx.ScreenWidth / 2, y + gfx.ScreenHeight / 2, 255, 192, 203);

			}
			else if (lp > 255)
			{


				gfx.PutPixel(x + gfx.ScreenWidth / 2, y + gfx.ScreenHeight / 2, 0, 0, 0);

			}

		}
	
}

void Game::ComposeFrame()
{
	
	Drawbrot(cx,cy, scale);

}
