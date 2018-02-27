/*****************************************************************************************************
*	Project: 2D Game Engine
*
*	Author: Dylan Morgan
*
*	File Name: Math.h
*
*	Date Created: 2/16/2017
*
*	Last Date Worked On: 2/16/2017
*
*	Project Description: This Project is a code based 2D game engine that will account for common
*						game design needs, ie: physics, data saving and loading, gameobjects,  audio,
*						etc.
*
*	File Description: This is a file that contains math related constants and functions
******************************************************************************************************/
#pragma once
#include <time.h>
#include "Types.h"
namespace Math
{
	class MathFunctions
	{
	public:
		static double PI;
		static double e;

		static int RandomNumber(int min, int max);	
		//static Vector2 CrossProduct(const Vector2& vec1, const Vector2& vec2);
		//static Vector2 DotProduct(const Vector2& vec1, const Vector2& vec2);
		

		MathFunctions() {};
		~MathFunctions() {};
	};
}

