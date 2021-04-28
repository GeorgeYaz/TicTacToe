// Point.h
// definition of class Point
#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <iomanip>
#include "Shape.h"

class Point : public Shape {

	friend std::ostream& operator<< (std::ostream& output, const Point& p);

public:
	explicit Point(float x = 0, float y = 0); // default constructor
	virtual ~Point() {}; // virtual destructor c

	void set_point(float x, float y); // set coordinates
	float x() const;  // get x coordinate
	float y() const;  // get y coordinate

	virtual float Area() const override;
	virtual float Volume() const override;
	virtual void PrintShapeName() const override;  // implementations of pure virtual members
	virtual void Print() const override;

private:
	float x_, y_; // x and y coordinates of Point
};
#endif