#include "Point.h"

using namespace std;

Point::Point() : c_c1(0.0), c_c2(0.0) {
}

Point::Point(float c1, float c2) : c_c1(c1), c_c2(c2) {
}

void Point::showCoord() const {
	cout << this->c_c1 << " | " << this->c_c2 << endl;
}

Point3D::Point3D() : Point(), c_c3(0.0) {
}

Point3D::Point3D(float c1, float c2, float c3) : Point(c1, c2), c_c3(c3) {
}

void Point3D::showCoord() const {
	cout << this->c_c1 << " | " << this->c_c2 << " | " << this->c_c3 << endl;
}