#ifndef __Point2d_H__
#define __Point2d_H__

#include <math.h>
#include <iostream>

class Point2d
{
public:

	float x, y;


	Point2d& Point2d::operator+ (const Point2d &p) const
	{
		Point2d tmp;

		tmp.x = x + p.x;
		tmp.y = y + p.y;

		return(tmp);
	}

	Point2d& Point2d::operator- (const Point2d &p) const
	{
		Point2d tmp;

		tmp.x = x - p.x;
		tmp.y = y - p.y;

		return(tmp);
	}

	const Point2d& Point2d::operator+= (const Point2d &p)
	{
		x += p.x;
		y += p.y;

		return *this;
	}

	const Point2d& Point2d::operator-=(const Point2d &p)
	{
		x -= p.x;
		y -= p.y;

		return *this;
	}

	bool Point2d::operator==(const Point2d &p) const
	{
		return (x == p.x && y == p.y);
	}

	bool Point2d::operator!=(const Point2d &p) const
	{
		return (x != p.x || y != p.y);
	}

	bool isZero() const
	{
		return x == 0.0f && y == 0.0f;
	}

	void setZero()
	{
		x = y = 0.0f;
	}

	float distanceTo(const Point2d &p)
	{
		return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
	}
};





#endif