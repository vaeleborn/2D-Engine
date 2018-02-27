/*****************************************************************************************************
*	Project: 2D Game Engine
*
*	Author: Dylan Morgan
*
*	File Name: GameObject.h
*
*	Date Created: 2/14/2017
*
*	Last Date Worked On: 2/16/2017
*
*	Project Description: This Project is a code based 2D game engine that will account for common
*						game design needs, ie: physics, data saving and loading, gameobjects,  audio,
*						etc.
*
*	File Description: This is the header to define a base game object
******************************************************************************************************/
#pragma once
#include "Types.h"
class GameObject
{
private:
	Vector2 m_Vel;
	Transform m_Transform;
	Collider m_Collider;

public:
	GameObject();

	Point GetPosition();
	void SetPosition(int x, int y);
	void Move(int xAmount, int yAmount);

	Vector2 GetVelocity();
	void SetVelocity(int i, int j);

	void SetBounds(uint width, uint height);

	void CreateCollider(Point center, uint width, uint height, std::string tag);
	Collider* GetCollider();

	uint GetWidth();
	uint GetHeight();

	~GameObject();
};

