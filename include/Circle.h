#ifndef CIRCLE_H
#define CIRCLE_H

#include "Position.h"

class Circle : virtual public Position {
protected:
	int r;
public:
	Circle();
	~Circle();
	Circle(int, int, int);
	void input();
	void output();
	double area();
	double perimeter();
};

#endif