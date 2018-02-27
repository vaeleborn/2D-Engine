#include "GameObject.h"



GameObject::GameObject()
{
}

void GameObject::SetBounds(uint w, uint h)
{
	m_Transform.Width = w;
	m_Transform.Height = h;
}

uint GameObject::GetWidth() { return m_Transform.Width; }

uint GameObject::GetHeight() { return m_Transform.Height; }

Point GameObject::GetPosition() 
{
	return m_Transform.CenterPosition;
}

void GameObject::SetPosition(int x, int y)
{
	m_Transform.CenterPosition.SetPoint(x, y);
	m_Collider.CenterPosition.SetPoint(x, y);
}

void GameObject::Move(int xAmount, int yAmount)
{
	m_Transform.CenterPosition.x += xAmount;
	m_Transform.CenterPosition.y += yAmount;
	m_Collider.CenterPosition.SetPoint(m_Transform.CenterPosition);
}

Vector2 GameObject::GetVelocity()
{
	return m_Vel;
}

void GameObject::SetVelocity(int i, int j)
{
	m_Vel.i = i;
	m_Vel.j = j;
}

void GameObject::CreateCollider(Point center, uint width, uint height, std::string tag)
{
	m_Collider = Collider(center, tag, width, height);
}

Collider* GameObject::GetCollider() { return &m_Collider; }

GameObject::~GameObject()
{
}
