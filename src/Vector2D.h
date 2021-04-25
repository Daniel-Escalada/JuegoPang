#pragma once
class Vector2D
{
public:
	Vector2D();
	virtual ~Vector2D();
	
	float x, y;

};
Vector2D::Vector2D()
{
	x = y = 0;
}

