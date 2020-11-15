#pragma once

#include <iostream>
#include <vector>
#include "Point.h"

class Course {
public:
	Course();
	virtual void addPoint(Point* point) = 0;
	virtual float findDistance() const = 0;
	virtual void message() const = 0;
};

class Course2D : public Course {
public:
	Course2D(int length);
	virtual void addPoint(Point* point);
	virtual float findDistance() const;
	virtual void message() const;
protected:
	int c_length;
	int c_size;
private:
	std::vector<Point*> c_pointArray;
};

class Course3D : public Course2D {
public:
	Course3D(int length);
	virtual void addPoint(Point3D* point);
	virtual float findDistance() const;
	virtual void message() const;
private:
	std::vector<Point3D*> c_pointArray;
};
