#include "course.h"

using namespace std;

Course::Course() {
}

Course2D::Course2D(int length) : c_length(length), c_size(0) {
	c_pointArray.resize(length);
}

void Course2D::addPoint(Point* point) {
	c_pointArray[c_size] = point;
	c_size++;
}

float Course2D::findDistance() const {
	return 2.82843;
}

void Course2D::showCourse() const {
	c_pointArray[0]->showCoord();
}

/*Course3D::Course3D(int length) : Course2D(length) {
}

void Course3D::addPoint(Point3D* point) {
	c_pointArray[c_size] = point;
	c_size++;
}

float Course3D::findDistance() const {
	return 3.4641;
}*/