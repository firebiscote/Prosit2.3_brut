#pragma once

#include <iostream>
#include <vector>
#include <math.h>
#include "Point.h"

class Course {
public:
	Course();
	virtual void addPoint(Point* point) = 0;
	virtual void addPoint(Point3D* point) = 0;
	virtual float findDistance() const = 0;
	virtual void message() const = 0;
};

class Course2D : virtual public Course {
public:
	Course2D();
	Course2D(int length);
	virtual void addPoint(Point* point);
	virtual void addPoint(Point3D* point);
	virtual float findDistance() const;
	virtual void message() const;
private:
	std::vector<Point*> _pointArray;
};

class Course3D : virtual public Course2D {
public:
	Course3D(int length);
	virtual void addPoint(Point3D* point);
	virtual float findDistance() const;
	virtual void message() const;
private:
	std::vector<Point3D*> _pointArray;
};
