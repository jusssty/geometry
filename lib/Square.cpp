#include <iostream>
#include "../include/Square.h"

using std::cin;
using std::cout;

Square::Square() : Position::Position(), a(0) {}

Square::~Square() {}

Square::Square(int _a, int x, int y) : Position::Position(x, y), a(_a) {}

void Square::input() {
	Position::input();
	cout << "Введите длину стороны: ";
	cin >> a;
	cout << "Успешно!\n";
	return;
}

void Square::output() {
	Position::output();
	cout << "Длина стороны a = " << a << '\n';
	return;
}

int Square::area() {
	return a * a;
}

int Square::perimeter() {
	return a * 4;
}
