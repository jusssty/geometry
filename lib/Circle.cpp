#include <iostream>
#include "../include/Circle.h"

using std::cin;
using std::cout;

Circle::Circle() : Position::Position(), r(0) {}

Circle::~Circle() {}

Circle::Circle(int _r, int x, int y) : Position::Position(x, y), r(_r) {}

void Circle::input() {
	Position::input();
	cout << "Введите радиус круга: ";
	cin >> r;
	cout << "Успешно!\n";
	return;
}

void Circle::output() {
	Position::output();
	cout << "Радиус круга r = " << r << '\n';
	return;
}

double Circle::area() {
	return 3.14 * r * r;
}

double Circle::perimeter() {
	return 6.28 * r;
}
