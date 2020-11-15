#pragma once

#include <iostream>
#include <vector>
#include "Point.h"

class Course {
public:
	Course();
};

class Course2D : public Course {
public:
	Course2D(int length);
	virtual void addPoint(Point& point);
	virtual float findDistance() const;
protected:
	int c_length;
	int c_size;
private:
	std::vector<Point&> c_pointArray;
};

class Course3D : public Course2D {
public:
	Course3D(int length);
	virtual void addPoint(Point& point);
	virtual float findDistance() const;
private:
	std::vector<Point3D&> c_pointArray;
};
