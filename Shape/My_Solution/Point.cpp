// Point.h
// definition of class Point
#include "Point.h"

Point::Point(float x, float y) {
    set_point(x, y);
}



void Point::set_point(float a, float b) { x_ = a; y_ = b; } // set coordinates
float Point::x() const { return x_; };  // get x coordinate
float Point::y() const { return y_; };  // get y coordinate

float Point::Area() const {
    return 0;
}

float Point::Volume() const {
    return 0;
}
void Point::PrintShapeName() const {
    std::cout << "Point: ";
}



void Point::Print() const {
    std::cout << std::setprecision(2) << std::setiosflags(std::ios::showpoint);
    std::cout << std::fixed << "(" << x() << ", " << y() << ")";
}


std::ostream& operator<< (std::ostream& output_ref, const Point& p_ref) {
    output_ref << std::fixed << std::setprecision(2) << std::setiosflags(std::ios::showpoint);
    output_ref << "(" << p_ref.x() << ", " << p_ref.y() << ")";
    return output_ref;
}