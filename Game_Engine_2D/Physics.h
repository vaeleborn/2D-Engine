/*****************************************************************************************************
*	Project: 2D Game Engine
*
*	Author: Dylan Morgan
*
*	File Name: Physics.h
*
*	Date Created: 2/14/2017
*
*	Last Date Worked On: 2/16/2017
*
*	Project Description: This Project is a code based 2D game engine that will account for common
*						game design needs, ie: physics, data saving and loading, gameobjects,  audio,
*						etc.
*
*	File Description: This is the header for the physics engine of the game engine
*						will containt things such as direction vectors, gravity, collision detection,
*						etc.
******************************************************************************************************/
#pragma once
#include "Types.h"
#include "GameObject.h"
#include <cmath>
#include <iostream>
#include <string>
#include <cstring>
#include <sstream>



namespace PhysicsEngine
{
	 class Physics
	 {
	public:
		static double gravity;
		static Vector2 UpVector;
		static Vector2 DownVector;
		static Vector2 LeftVector;
		static Vector2 RightVector;

		static double GetDistance(const Point& a, const Point& b);

		static bool Collision(GameObject* obj1, GameObject* obj2);

		

		Physics();
		~Physics();
	};

}

