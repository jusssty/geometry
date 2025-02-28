#include <iostream>
#include "../include/Position.h"

using std::cin;
using std::cout;

Position::Position() : x(0), y(0) {}

Position::~Position() {}

Position::Position(int _x, int _y) : x(_x), y(_y) {}

void Position::output() {
	cout << "Координаты фигуры: x = " << x << ", y = " << y << '\n';
	return;
}

void Position::input() {
	cout << "Введите позицию фигуры: ";
	cin >> x >> y;
	cout << "Успешно!\n";
	return;
}

void Position::change_pos() {
	this -> output();
	cout << "\nВведите новое положение: ";
	cin >> x >> y;
	cout << "Позиция изменена!\n";
	return;
}
