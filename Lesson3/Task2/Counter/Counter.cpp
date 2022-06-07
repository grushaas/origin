﻿#include <iostream>
#include <string>
#include <windows.h>

enum class Command {
	exit = 'x',
	increase = '+',
	decrease = '-',
	meaning = '='
};

class Counter {
private:
	int number = 1;

public:

	Counter(int number = 1) : number(number) {
		
	}
	
	void increment() {
		number += 1;
	}

	void decrement() {
		number -= 1;
	}

	int presentValue() {
		return number;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int number;
	std::string answer;
	bool answerBool;
	char symbol = 's';
	Command comm;

	std::cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: ";
	std::cin >> answer;

	while (true) {
		if (answer == "да") {
			std::cout << "Введите начальное значение счетчика: ";
			std::cin >> number;
			answerBool = true;
			break;
		}
		else if (answer == "нет") {
			std::cout << "Начальное значение счетчика будет выставленно по умолчанию\nЗначение счетчика = 1" << std::endl;
			number = 1;
			answerBool = false;
			break;
		}
		else {
			std::cout << "Введите пожалуйста либо да, либо нет: ";
			std::cin >> answer;
		}
	}

	Counter count = answerBool ? Counter(number) : Counter();

	while (comm != Command::exit) {
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> symbol;

		if(symbol == '+') {
			comm == Command::increase;
		}
		else if(symbol = '-') {
			comm == Command::decrease;
		}
		else if(symbol == '=') {
			comm == Command::meaning;
		}
		else if(symbol == 'x') {
			comm == Command::exit;
		}
		else {
			std::cout << "Такой команды не существует" << std::endl;
		}

		
		switch (static_cast<Command>(comm)) {
			case Command::increase:
				count.increment();
				break;

			case Command::decrease:
				count.decrement();
				break;
			
			case Command::meaning:
				count.presentValue();
				break;

			case Command::exit:
				break;

			default:
				std::cout << "Такой команды не существует" << std::endl;
				break;
		}
		
		
		
		
		
		// if (comm == Command::increase) {
		// 	count.increment();
		// }
		// else if (comm == Command::decrease) {
		// 	count.decrement();
		// }
		// else if (comm == Command::meaning) {
		// 	std::cout << count.presentValue() << std::endl;
		// }
		// else if (comm == Command::exit) {
		// 	continue;
		// }
		// else {
		// 	std::cout << "Такой команды нет!" << std::endl;
		// }
	}
	
	std::cout << "До свидания!" << std::endl;

	return 0;
}