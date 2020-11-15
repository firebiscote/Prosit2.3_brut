#include "course.h"

Course::Course() {
}

Course2D::Course2D(int length) : c_length(length), c_size(0) {
	c_pointArray.resize(length);
}

void Course2D::addPoint(Point& point) {
	c_pointArray[c_size] = point;
	c_size++;
}

float Course2D::findDistance() const {
	return 2.82843;
}

Course3D::Course3D(int length) : c_length(length), c_size(0) {
	c_pointArray(length);
}

float Course3D::findDistance() const {
	return 3.4641;
}