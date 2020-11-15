#include "course.h"

using namespace std;

Course::Course() {
}

Course2D::Course2D() {
}

Course2D::Course2D(int length) {
	_pointArray.resize(length);
}

void Course2D::addPoint(Point* point) {
	for (int i = 0; i < _pointArray.size(); i++) {
		if (_pointArray[i] == NULL) {
			_pointArray[i] = point;
			break;
		}
	}
}

void Course2D::addPoint(Point3D* point) {
}

float Course2D::findDistance() const {
	float distance = 0;
	for (int i = 0; i < _pointArray.size() - 1; i++) {
		distance += sqrt(pow(_pointArray[i + 1]->get_c1() - _pointArray[i]->get_c1(), 2) + pow(_pointArray[i + 1]->get_c2() - _pointArray[i]->get_c2(), 2));
	}
	return distance;
}

void Course2D::message() const {
	cout << "2D course calculation" << endl;
}

Course3D::Course3D(int length) {
	_pointArray.resize(length);
}

void Course3D::addPoint(Point3D* point) {
	for (int i = 0; i < _pointArray.size(); i++) {
		if (_pointArray[i] == NULL) {
			_pointArray[i] = point;
			break;
		}
	}
}

float Course3D::findDistance() const {
	float distance = 0;
	for (int i = 0; i < _pointArray.size() - 1; i++) {
		distance += sqrt(pow(_pointArray[i + 1]->get_c1() - _pointArray[i]->get_c1(), 2) + pow(_pointArray[i + 1]->get_c2() - _pointArray[i]->get_c2(), 2) + pow(_pointArray[i + 1]->get_c3() - _pointArray[i]->get_c3(), 2));
	}
	return distance;
}

void Course3D::message() const {
	cout << "3D course calculation" << endl;
}