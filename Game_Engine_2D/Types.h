/*****************************************************************************************************
*	Project: 2D Game Engine
*
*	Author: Dylan Morgan
*
*	File Name: Types.h
*
*	Date Created: 2/14/2017
*
*	Last Date Worked On: 2/16/2017
*
*	Project Description: This Project is a code based 2D game engine that will account for common
*						game design needs, ie: physics, data saving and loading, gameobjects,  audio,
*						etc.
*
*	File Description: This is a file that contains typedefs and "primitive" engine types such as points
******************************************************************************************************/
#pragma once
typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned long ulong;
#include <string>
#include <sstream>
#include "Debugger.h"

enum DIRECTIONS {LEFT, RIGHT};

struct Vector2
{
	Vector2() {};
	Vector2(double x, double y)
	{
		i = x;
		j = y;
	}
	double i, j;

	double GetMagnitude()
	{
		double tI = i * i;
		double tJ = j * j;
		return sqrt(tI + tJ);
	}

	std::string GetVecVals()
	{
		std::stringstream outStr;
		outStr << "(" << i << ", " << j << ")";
		return outStr.str();
	}
	
	Vector2 GetUnitVector()
	{
		return Vector2(i / GetMagnitude(), j / GetMagnitude());
	}

	void operator =(Vector2 v)
	{
		i = v.i;
		j = v.j;
	}


	~Vector2() {};
};

struct Point
{
	double x, y;
	Point() {};
	Point(int X, int Y)
	{
		x = X;
		y = Y;
	}

	void SetPoint(double X, double Y)
	{
		x = X;
		y = Y;
	}

	void SetPoint(Point p)
	{
		x = p.x;
		y = p.y;
	}

};

struct Transform
{
	Point CenterPosition;
	uint Width;
	uint Height;
	bool LookDirection;
};


struct Collider
{
	Point CenterPosition;
	std::string Tag;
	bool IsColliding;
	uint Width;
	uint Height;

	Collider(Point center, std::string tag, uint width, uint height)
	{
		CenterPosition = center;
		Tag = tag;
		IsColliding = false;
		Width = width;
		Height = height;
	}

	Collider() {};

	void operator =(Collider col)
	{
		CenterPosition = col.CenterPosition;
		Tag = col.Tag;
		Width = col.Width;
		Height = col.Height;
		IsColliding = false;
	}
};





