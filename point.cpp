#include "Point.h"

using namespace std;

Point::Point() : _c1(0.0), _c2(0.0) {
}

Point::Point(float c1, float c2) : _c1(c1), _c2(c2) {
}

void Point::showCoord() const {
	cout << "Point : " << this << "  |  " << "ID : " << typeid(this).name() << "  |  type : 2  |  coord : " << this->_c1 << " " << this->_c2 << endl;
}

float Point::get_c1() const {
	return this->_c1;
}

float Point::get_c2() const {
	return this->_c2;
}

Point3D::Point3D() : Point(), _c3(0.0) {
}

Point3D::Point3D(float c1, float c2, float c3) : Point(c1, c2), _c3(c3) {
}

void Point3D::showCoord() const {
	cout << "Point : " << this << "  |  " << "ID : " << typeid(this).name() << "  |  type : 3  |  coord : " << this->_c1 << " " << this->_c2 << " " << this->_c3 << endl;
}

float Point3D::get_c3() const {
	return this->_c3;
}