#pragma once

class Point {
public:
	Point();
	Point(float c1, float c2);
	virtual void showCoord() const;
protected:
	float c_c1;
	float c_c2;
};

class Point3D : public Point {
public:
	Point3D(float c1, float c2, float c3);
	virtual void showCoord() const;
protected:
	float c_c3;
};
