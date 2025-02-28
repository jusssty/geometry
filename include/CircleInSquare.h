#ifndef CIRCLEINSQUARE_H
#define CIRCLEINSQUARE_H

#include "Square.h"
#include "Circle.h"

class CircleInSquare : public Square, public Circle {
public:
	CircleInSquare();
	~CircleInSquare();
	CircleInSquare(int, int, int);
	void input();
	void output();
};

#endif