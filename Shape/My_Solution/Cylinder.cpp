// Cylinder.h
// definition of class Cylinder

#include "Cylinder.h"
#include <iostream>
#include <iomanip>

Cylinder::Cylinder(Circle c, float h)
	: Circle(Point(c.x(), c.y()), c.radius()) {
	set_height(h);
}

void Cylinder::set_height(float h) { height_ = h > 0 ? height_ = h : height_ = 0; };
float Cylinder::height() const { return height_; };
void Cylinder::PrintShapeName() const { std::cout << "Cylinder: "; };


float Cylinder::Area() const {
	return (2 * Circle::Area()) + (height() * 2 * kPi * radius());
}

float Cylinder::Volume() const {
	return Circle::Area() * height();
}

void Cylinder::Print() const {
	Circle::Print();
	std::cout << "; Height = " << height();
}

std::ostream& operator<<(std::ostream& output_ref, const Cylinder& c_ref) {
	output_ref << std::setprecision(2) << std::setiosflags(std::ios::showpoint);
	output_ref << "Center = (" << c_ref.x() << ", " << c_ref.y() << "); Radius = " << c_ref.radius();
	output_ref << "; Height = " << c_ref.height();
	return output_ref;
}
