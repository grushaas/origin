﻿#include <iostream>

class Calculator {
private:
	double num1;
	double num2;

public:
	double add() {
		double result = num1 + num2;

		return result;
	}
	double multiply() {
		double result = num1 * num2;

		return result;
	}
	double subtract_1_2() {
		double result = num1 - num2;

		return result;
	}
	double subtract_2_1() {
		double result = num2 - num1;

		return result;
	}
	double divide_1_2() {
		double result = num1 / num2;

		return result;
	}
	double divide_2_1() {
		double result = num2 / num1;

		return result;
	}
	bool set_num1(double number1) {
		if (num1 != 0) {
			num1 = number1;
			return true;
		}
		else {
			return false;
		}
	}
	bool set_num2(double number2) {
		if (num2 != 0) {
			num2 = number2;
			return true;
		}
		else {
			return false;
		}
	}
};

int main() {
	setlocale(LC_ALL, "Russian");

	Calculator calc;
	double num1;
	double num2;

	do {
		std::cout << "Введите num1: " << ;
		std::cin >> num1;
		if (calc.set_num1(num1) == false) {
			std::cout << "Неверный ввод!" << std::endl;
			std::cout << "Введите num1: ";
			std::cin >> num1;

			calc.set_num1(num1);
		}
		else {
			calc.set_num1(num1);
		}


	} while (true);
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*std::cout << "Введите num1: ";
	std::cin >> num1;
	while (calc.set_num1(num1) == false) {
		std::cout << "Неверный ввод!" << std::endl;
		std::cout << "Введите num1: ";
		std::cin >> num1;

		calc.set_num1(num1);
	}


	std::cout << "Введите num2: ";
	std::cin >> num2;
	while (calc.set_num2(num2) == false) {
		std::cout << "Неверный ввод!" << std::endl;
		std::cout << "Введите num2: ";
		std::cin >> num2;

		calc.set_num2(num2);
	}*/

	while (true) {
		//Сложение
		std::cout << "num1 + num2 = " << calc.add() << std::endl;

		//Вычитания num2 из num1
		std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;

		//Вычитания num1 из num2
		std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;

		//Умножение
		std::cout << "num1 * num2 = " << calc.multiply() << std::endl;

		//Деление num1 на num2
		std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;

		//Деление num2 на num1
		std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;

		//Смена числа - num1
		std::cout << "Введите num1: ";
		std::cin >> num1;
		while (calc.set_num1(num1) == false) {
			std::cout << "Неверный ввод!" << std::endl;
			std::cout << "Введите num1: ";
			std::cin >> num1;

			calc.set_num1(num1);
		}

		//Смена числа - num2
		std::cout << "Введите num2: ";
		std::cin >> num2;
		while (calc.set_num2(num2) == false) {
			std::cout << "Неверный ввод!" << std::endl;
			std::cout << "Введите num2: ";
			std::cin >> num2;

			calc.set_num2(num2);
		}
	}

	return 0;
}
