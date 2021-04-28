// Cylinder.h
// definition of class Cylinder
#ifndef CYLINDR_H
#define CYLINDR_H
#include "Circle.h"



class Cylinder : public Circle {

	friend std::ostream& operator<<(std::ostream& output_ref, const Cylinder& c_ref);

public:
	// constructor
	explicit Cylinder(Circle c = Circle(), float h = 0.0);
	// virtual destructor
	virtual ~Cylinder() {};

	void set_height(float h);
	float height() const;
	virtual float Area() const override;
	virtual float Volume() const override;
	virtual void PrintShapeName() const override;
	virtual void Print() const override;

private:
	float height_; // radius of Cylinder
};
#endif