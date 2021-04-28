// Shape.h
// definition of abstract base class Shape
#ifndef SHAPE_H
#define SHAPE_H

const float kPi = 3.141592653589;

class Shape {   // abstract base class due to pure virtual functions

public:

	/*	Shape() //explicit default constructor, not really needed, see below.
		{
			// could be used to see when the base-class constructor is called
			// std::cout << "\nshape constructor at work";
		}
	*/

	// If a class has no explicitly defined constructors, the compiler will implicitly 
	// declare and define a default constructor for it. This implicitly defined default 
	// constructor is equivalent to an explicitly defined one with an empty body (see above).

		// the following four functions are pure virtual
		// they are inheritable but have to be overridden in the derived classes
	virtual float Area() const = 0;
	virtual float Volume() const = 0;
	virtual void PrintShapeName() const = 0;
	virtual void Print() const = 0;

};
#endif


