#include "Physics.h"

using namespace PhysicsEngine;

double Physics::gravity(-9.8);
Vector2 Physics::UpVector(0, -1);
Vector2 Physics::DownVector(0, 1);
Vector2 Physics::LeftVector(-1, 0);
Vector2 Physics::RightVector(1, 0);

double Physics::GetDistance(const Point& a, const Point& b)
{
	return Vector2(b.x - a.x, b.y - a.y).GetMagnitude();
}

bool Physics::Collision(GameObject* obj1, GameObject* obj2)
{
	bool collision = false;
	int x1[2] = { obj1->GetCollider()->CenterPosition.x - obj1->GetCollider()->Width / 2,
					obj1->GetCollider()->CenterPosition.x + obj1->GetCollider()->Width / 2 };

	int y1[2] = { obj1->GetCollider()->CenterPosition.y - obj1->GetCollider()->Height / 2,
					obj1->GetCollider()->CenterPosition.y + obj1->GetCollider()->Height / 2 };

	int x2[2] = { obj2->GetCollider()->CenterPosition.x - obj2->GetCollider()->Width / 2,
		obj2->GetCollider()->CenterPosition.x + obj2->GetCollider()->Width / 2 };

	int y2[2] = { obj2->GetCollider()->CenterPosition.y - obj2->GetCollider()->Height / 2,
		obj2->GetCollider()->CenterPosition.y + obj2->GetCollider()->Height / 2 };

	if (x1[0] <= x2[1] && x1[1] >= x2[0])
	{
		if (y1[0] <= y2[1] && y1[1] >= y2[0])
		{
			collision = true;
		}
	}
	
	return collision;
}


Physics::Physics()
{

}




Physics::~Physics()
{
}
