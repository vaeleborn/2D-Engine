/*****************************************************************************************************
*	Project: 2D Game Engine
*
*	Author: Dylan Morgan
*
*	File Name: Core.cpp
*
*	Date Created: 2/14/2017
*
*	Last Date Worked On: 2/14/2017
*
*	Project Description: This Project is a code based 2D game engine that will account for common 
*						game design needs, ie: physics, data saving and loading, gameobjects,  audio,
*						etc.
*
*	File Description: This is the core file to contain all objects needed by the engine
******************************************************************************************************/
#include "Physics.h"
#include "Debugger.h"
#include "Math.h"
#include "Graphics.h"
#include <iostream>
#include <cstring>
#include <sstream>

using std::cout;
using namespace PhysicsEngine;

void Init();

int main()
{
	Init();
	std::srand(time(NULL));
	/*GameObject obj1;
	GameObject obj2;

	obj1.CreateCollider(Point(0, 0), 2, 2, "Player");
	obj2.CreateCollider(Point(2, 3), 2, 4,  "Enemy");

	if (Physics::Collision(&obj1, &obj2))
	{
		Debugger::Log(obj1.GetCollider()->Tag + " collider is colliding with " + obj2.GetCollider()->Tag + " collider", true);
	}
	else
	{
		Debugger::Log("No Collision!", true);
	}

	for (int i = 0; i < 5; i++)
	{
		Debugger::Log(Math::MathFunctions::RandomNumber(1, 100), true);
	}

	Debugger::Log(Physics::Collision(&obj1, &obj2));
		

	
	cout << "\n\n\n\n";
	system("pause");*/
	sf::RenderWindow window(sf::VideoMode(600, 600), "Test");
	sf::Event ev;

	sf::Image img;
	if (!img.loadFromFile("sprites.png"))
		Debugger::Log("Couldn't load image", true);

	std::vector<sf::Sprite> sprites; 
	
	Graphics::GetSpriteStrip(sprites, img, 32, 32, 1, 2, 3);

	while (window.isOpen())
	{
		window.clear();
		while (window.pollEvent(ev))
		{
			if (ev.type == sf::Event::Closed)
				window.close();
		}

		for (int i = 0; i < 3; i++)
		{
			window.draw(sprites[i]);
		}

		window.display();
	}
}

void Init()
{
	Debugger::SetOutFile("../debugLog.txt");
	Debugger::ClearLog();
}