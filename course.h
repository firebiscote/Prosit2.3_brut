#pragma once

#include <iostream>
#include <vector>
#include "Point.h"

class Course2D {
public:
	Course2D();
	Course2D(int length);
	virtual float findDistance() const;
protected:
	int c_length;
private:
	vector<Point*> pointArray;
};

class Course3D : public Course2D {
public:
	Course3D();
	Course3D(int length);
	virtual float findDistance() const;
private:
	vector<Point3D*> pointArray;
};
