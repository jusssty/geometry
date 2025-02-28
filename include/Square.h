#ifndef SQUARE_H
#define SQUARE_H

#include "Position.h"

class Square : virtual public Position {
protected:
	int a;
public:
	Square();
	~Square();
	Square(int, int, int);
	void input();
	void output();
	int area();
	int perimeter();
};

#endif
