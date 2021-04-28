// Circle.h
// definition of class Circle
#ifndef CIRCLE1_H
#define CIRCLE1_H

#include "Point.h"

class Circle : public Point { // Circle inherits from Point

    friend std::ostream& operator<<(std::ostream& output, const Circle& c);

public:
    // constructor
    explicit Circle(Point p = Point(), float r = 0);
    // virtual destructor 
    virtual ~Circle() { };

    void set_radius(float r);
    float radius() const;
    virtual float Area() const override;
    virtual float Volume() const override;
    virtual void PrintShapeName() const override;
    virtual void Print() const override;

private:
    float radius_; // radius of circle
};
#endif