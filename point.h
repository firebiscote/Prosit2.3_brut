#pragma once

#include <iostream>

class Point {
public:
	Point();
	Point(float c1, float c2);
	virtual void showCoord() const;
	float get_c1() const;
	float get_c2() const;
protected:
	float _c1;
	float _c2;
};

class Point3D : public Point {
public:
	Point3D();
	Point3D(float c1, float c2, float c3);
	virtual void showCoord() const;
	float get_c3() const;
protected:
	float _c3;
};
