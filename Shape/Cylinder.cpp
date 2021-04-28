// Cylinder.h
// definition of class Cylinder

#include "Cylinder.h"

//Cylinder::Cylinder(Circle c, float h) : Circle(static_cast<Point>(c), c.getRadius())
Cylinder::Cylinder(Circle c, float h) : Circle(c , c.radius())
{
    set_height(h);
}

void Cylinder::set_height(float h){height_ = h > 0 ? height_ = h : height_ = 0; };
float Cylinder::height() const{return height_;};
void Cylinder::PrintShapeName() const { std::cout << "Cylinder: "; };


float Cylinder::Area( ) const{
    
    // perimeter * height + 2 * circle-area
    return 2 * kPi * radius() * height() + 2 * Circle::Area();

}

float Cylinder::Volume() const{
    
    // circle-area * height_
    return Circle::Area() * height();

}

void Cylinder::Print() const{
    
    std::cout << std::fixed << std::setprecision(2);
    // Center = (x_, y_); Radius = radius_; Height = height_
    Circle::Print();
    std::cout << "; Height = " << height();

}

std::ostream& operator<<(std::ostream& output_ref, const Cylinder& c_ref){

   output_ref << std::fixed << std::setprecision(2);
   // Center = (x_, y_); Radius = radius_; Height = height_
   
    output_ref << "Center = ";
    output_ref << "(" << c_ref.x() << ", " << c_ref.y() << "); ";
    output_ref << "Radius = " << c_ref.radius();
    output_ref << "; Height = " << c_ref.height();
   
   return output_ref;
}
