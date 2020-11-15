#include "course.h"
#include "point.h"
#include <iostream>

using namespace std;

int main() {
	Point* p1;
	Point* p2;
	Point* p3;
	Course* course;
	p1 = new Point(0.0, 0.0);
	p2 = new Point(1.0, 1.0);
	p3 = new Point(2.0, 2.0);
	Course = new Course2D(3);
	course->addPoint(p1);
	course->addPoint(p2);
	course->addPoint(p3);
	cout << course->findDistance() << endl;
	course->message();
	p1 = new Point3D(0.0, 0.0, 0.0);
	p2 = new Point3D(1.0, 1.0, 1.0);
	p3 = new Point3D(2.0, 2.0, 2.0);
	course = new Course3D(3);
	course->addPoint(p1);
	course->addPoint(p2);
	course->addPoint(p3);
	cout << course->findDistance() << endl;
	course->message();
	p1 = new Point(0.0, 0.0);
	p2 = new Point3D(1.0, 1.0, 1.0);
	(p1 = p2)->showCoord();
}