#include "../include/CircleInSquare.h"
#include <iostream>

using std::cin;
using std::cout;

CircleInSquare::CircleInSquare() : Circle(), Square() {}

CircleInSquare::~CircleInSquare() {}

CircleInSquare::CircleInSquare(int r, int x, int y) : Circle(r, x, y), Square(r * 2, x, y) {}

void CircleInSquare::input() {
	Circle::input();
	a = r * 2;
	return;
}

void CircleInSquare::output() {
	Circle::output();
	cout << "Длина стороны а = " << a << '\n';
	return;
}
