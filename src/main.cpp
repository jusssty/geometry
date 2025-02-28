#include <iostream>
#include "../include/Position.h"
#include "../include/Square.h"
#include "../include/Circle.h"
#include "../include/CircleInSquare.h"

using std::cin;
using std::cout;

void square(Square &A) {
	int choose;
	while (true) {
		cout << "Выберите действие c квадратом\n"
		<< "1. Ввод квадрата\n2. Вывод квадрата\n3. Изменение позиции\n"
		<< "4. Площадь квадрата\n5. Периметр квадрата\n6. Назад\n";
		cin >> choose;
		cout << "\033[2J\033[1;1H";
		switch (choose) {
			case 1:
				A.Square::input();
				break;
			case 2:
				A.Square::output();
				break;
			case 3:
				A.change_pos();
				break;
			case 4:
				cout << "Площадь квадрата: " << A.area() << '\n';
				break;
			case 5:
				cout << "Периметр квадрата: " << A.perimeter() << '\n';
				break;
			default:
				return;
		}
	}
}

void circle(Circle &A) {
	int choose;
	while (true) {
		cout << "Выберите действие c окружностью\n"
		<< "1. Ввод окружности\n2. Вывод окружности\n3. Изменение позиции\n"
		<< "4. Площадь круга\n5. Длина круга\n6. Назад\n";
		cin >> choose;
		cout << "\033[2J\033[1;1H";
		switch (choose) {
			case 1:
				A.Circle::input();
				break;
			case 2:
				A.Circle::output();
				break;
			case 3:
				A.change_pos();
				break;
			case 4:
				cout << "Площадь круга: " << A.area() << '\n';
				break;
			case 5:
				cout << "Периметр круга: " << A.perimeter() << '\n';
				break;
			default:
				return;
		}
	}
}

void circleinsquare(CircleInSquare &A) {
	int choose;
	while (true) {
		cout << "Выберите действие c окружностью, вписанной в квадрат\n"
		<< "1. Ввод окружности\n2. Вывод окружности\n3. Изменение позиции\n"
		<< "4. Площадь круга\n5. Периметр круга\n6. Площадь квадрата\n"
		<< "7. Периметр квадрата\n8. Общий периметр\n9. Выход";
		cin >> choose;
		cout << "\033[2J\033[1;1H";
		switch (choose) {
			case 1:
				A.CircleInSquare::input();
				break;
			case 2:
				A.CircleInSquare::output();
				break;
			case 3:
				A.change_pos();
				break;
			case 4:
				cout << "Площадь круга: " << A.Circle::area() << '\n';
				break;
			case 5:
				cout << "Периметр круга: " << A.Circle::perimeter() << '\n';
				break;
			case 6:
				cout << "Площадь квадрата: " << A.Square::area() << '\n';
				break;
			case 7:
				cout << "Периметр квадрата: " << A.Square::perimeter() << '\n';
				break;
			case 8:
				cout << "Общий периметр: " << A.Square::perimeter() + A.Circle::perimeter() << '\n';
				break;
			default:
				return;
		}
	}
}

int main() {
	Circle A;
	Square B;
	CircleInSquare C;
	int choose;
	//cout << "\033[2J\033[1;1H";
	while (true) {
		cout << "Выберите фигуру\n"
		<< "1. Окружность\n2. Квадрат\n3. Окружность, вписанная в квадрат\n4. Выход\n";
		cin >> choose;
		cout << "\033[2J\033[1;1H";
		switch (choose) {
			case 1:
				circle(A);
				break;
			case 2:
				square(B);
				break;
			case 3:
				circleinsquare(C);
				break;
			default:
				return 0;
		}
	}
}