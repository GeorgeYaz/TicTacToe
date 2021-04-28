#include "Circle.h"

Circle::Circle(Point p, float r)
	: Point(p.x(), p.y()) {
	set_radius(r);
}

void Circle::set_radius(float r) { 
	if (r >= 0) radius_ = r;
	else {
		radius_ = 0;
	}
}
float Circle::radius() const { return radius_; };
void Circle::PrintShapeName() const { std::cout << "Circle: "; };

float Circle::Area() const {
	return (kPi * radius() * radius());
}


float Circle::Volume() const { return 0.0; };

void Circle::Print() const {
	std::cout << std::setprecision(2) << std::setiosflags(std::ios::showpoint);
	std::cout << "Center = (" << x() << ", " << y() << "); Radius = " << radius();
}


std::ostream& operator<<(std::ostream& output_ref, const Circle& c_ref) {
	output_ref << std::setprecision(2) << std::setiosflags(std::ios::showpoint);
	output_ref << "Center = (" << c_ref.x() << ", " << c_ref.y() << "); Raduis = " << c_ref.radius();
	return output_ref;
}