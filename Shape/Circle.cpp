#include "Circle.h"

#include <cmath>


Circle::Circle(Point p, float r) : Point(p.x(),p.y())
{
    set_radius(r);
}

void Circle::set_radius(float r){
  if (r >= 0)
    radius_ = r;
  else
    radius_ = 0;
}

float Circle::radius() const{return radius_;};

void Circle::PrintShapeName() const { std::cout << "Circle: "; };

float Circle::Area( ) const{

  return kPi * pow(radius_,2); 

}


float Circle::Volume() const { return 0.0; }; 

void Circle::Print() const {
    
    std::cout << std::fixed << std::setprecision(2);
    // Center = (x_, y_); Radius = radius_
    std::cout << "Center = ";
    Point::Print();
    std::cout << "; Radius = " << radius();
}


std::ostream& operator<<(std::ostream& output_ref, const Circle& c_ref){

    output_ref << std::fixed << std::setprecision(2);
   // Center = (x_, y_); Radius = radius_
   
    output_ref << "Center = ";
    output_ref << "(" << c_ref.x() << ", " << c_ref.y() << "); ";
    output_ref << "Radius = " << c_ref.radius();
   
   
   return output_ref;
}



