#include <iostream>
#include <string>

class Figure {
public:
	virtual void print() {
		std::cout << name << ":" << std::endl;
		if (check()) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << sides << std::endl;
	}

	Figure(std::string name, int sides) {
		this->name = name;
		this->sides = sides;
	}

protected:

	virtual void print_sides() {

	}

	virtual void print_angles() {

	}
		
	virtual bool check() {
		if (sides == 0) {
			return true;
		}
		return false;
	}

	std::string name;
	int sides = 0;
};

class Triangle : public Figure {
public:
	Triangle(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC, int sides) : Figure("Triangle", 0) {
		this->sideA = sideA;
		this->sideB = sideB;
		this->sideC = sideC;

		this->angleA = angleA;
		this->angleB = angleB;
		this->angleC = angleC;

		this->sides = sides;
	}

	void print() override {
		std::cout << name << ":" << std::endl;
		if (check()) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << sides << std::endl;
		std::cout << "Стороны: ";
		print_sides();
		std::cout << std::endl;
		std::cout << "Углы: ";
		print_angles();
	}

protected:
	bool check() override {
		int answer = 0;
		answer = angleA + angleB + angleC;
		if (sides == 3 && answer == 180) {
			return true;
		}
		return false;
	}

	virtual void print_sides() {
		std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
	}

	virtual void print_angles() {
		std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
	}

private:
	int sideA, sideB, sideC;
	int angleA, angleB, angleC;
};

class Right : public Figure {
public:
	Right(int sideA, int sideB, int sideC, int angleA, int angleB, int sides) : Figure("Right Triangle", 0) {
		this->sideA = sideA;
		this->sideB = sideB;
		this->sideC = sideC;

		this->angleA = angleA;
		this->angleB = angleB;
		angleC = 90;

		this->sides = sides;
	}

	void print() override {
		std::cout << name << ":" << std::endl;
		if (check()) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << sides << std::endl;
		std::cout << "Стороны: ";
		print_sides();
		std::cout << std::endl;
		std::cout << "Углы: ";
		print_angles();
	}

protected:
	bool check() override {
		if (angleC == 90) {
			return true;
		}
		return false;
	}

	virtual void print_sides() {
		std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
	}

	virtual void print_angles() {
		std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
	}

private:
	int sideA, sideB, sideC;
	int angleA, angleB, angleC;

};

class Isosceles : public Figure {
public:
	Isosceles(int sideA, int sideB, int angleA, int angleB, int sides) : Figure("Isosceles Triangle", 0) {
		this->sideA = sideA;
		this->sideB = sideB;
		sideC = sideA;

		this->angleA = angleA;
		this->angleB = angleB;
		angleC = angleA;

		this->sides = sides;
	}

	void print() override {
		std::cout << name << ":" << std::endl;
		if (check()) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << sides << std::endl;
		std::cout << "Стороны: ";
		print_sides();
		std::cout << std::endl;
		std::cout << "Углы: ";
		print_angles();
	}

protected:
	bool check() override {
		if (sideA == sideC && angleA == angleC) {
			return true;
		}
		return false;
	}

	virtual void print_sides() {
		std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
	}

	virtual void print_angles() {
		std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
	}

private:
	int sideA, sideB, sideC;
	int angleA, angleB, angleC;
};

class Equilateral : public Figure {
public:
	Equilateral(int sideA, int sides) : Figure("Equilateral Triangle", 0) {
		this->sideA = sideA;
		sideB = sideA;
		sideC = sideA;

		angleA = 60;
		angleB = 60;
		angleC = 60;

		this->sides = sides;
	}

	void print() override {
		std::cout << name << ":" << std::endl;
		if (check()) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << sides << std::endl;
		std::cout << "Стороны: ";
		print_sides();
		std::cout << std::endl;
		std::cout << "Углы: ";
		print_angles();
	}

protected:
	bool check() override {
		if (sideA == sideB && sideA == sideC && sideB == sideC && angleA == angleC) {
			return true;
		}
		return false;
	}

	virtual void print_sides() {
		std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
	}

	virtual void print_angles() {
		std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
	}

private:
	int sideA, sideB, sideC;
	int angleA, angleB, angleC;
};

class Quadrilateral : public Figure {
public:
	Quadrilateral(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD, int sides) : Figure("Quadrilateral", 0) {
		this->sideA = sideA;
		this->sideB = sideB;
		this->sideC = sideC;
		this->sideD = sideD;

		this->angleA = angleA;
		this->angleB = angleB;
		this->angleC = angleC;
		this->angleD = angleD;
		
		this->sides = sides;
	}

	void print() override {
		std::cout << name << ":" << std::endl;
		if (check()) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << sides << std::endl;
		std::cout << "Стороны: ";
		print_sides();
		std::cout << std::endl;
		std::cout << "Углы: ";
		print_angles();
	}

protected:
	bool check() override {
		int answer = angleA + angleB + angleC + angleD;
		if (sides == 4 && answer == 360) {
			return true;
		}
		return false;
	}

	virtual void print_sides() {
		std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
	}

	virtual void print_angles() {
		std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
	}

private:
	int sideA, sideB, sideC, sideD;
	int angleA, angleB, angleC, angleD;
};

class Rectangle : public Figure {
public:
	Rectangle(int sideA, int sideB, int sides) : Figure("Rectangle", 0) {
		this->sideA = sideA;
		this->sideB = sideB;
		sideC = sideA;
		sideD = sideB;

		angleA = 90;
		angleB = 90;
		angleC = 90;
		angleD = 90;

		this->sides = sides;
	}

	void print() override {
		std::cout << name << ":" << std::endl;
		if (check()) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << sides << std::endl;
		std::cout << "Стороны: ";
		print_sides();
		std::cout << std::endl;
		std::cout << "Углы: ";
		print_angles();
	}

protected:
	bool check() override {
		if (sideA == sideC && sideB == sideD) {
			if (angleA == 90 && angleB == 90 && angleC == 90 && angleD == 90) {
				return true;
			}
		}
		return false;
	}

	virtual void print_sides() {
		std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
	}

	virtual void print_angles() {
		std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
	}

private:
	int sideA, sideB, sideC, sideD;
	int angleA, angleB, angleC, angleD;
};

class Square : public Figure {
public:
	Square(int sideA, int sides) : Figure("Square", 0) {
		this->sideA = sideA;
		sideB = sideA;
		sideC = sideA;
		sideD = sideA;

		angleA = 90;
		angleB = 90;
		angleC = 90;
		angleD = 90;

		this->sides = sides;
	}

	void print() override {
		std::cout << name << ":" << std::endl;
		if (check()) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << sides << std::endl;
		std::cout << "Стороны: ";
		print_sides();
		std::cout << std::endl;
		std::cout << "Углы: ";
		print_angles();
	}

protected:
	bool check() override {
		if (sideA == sideB && sideA == sideC && sideA == sideD && sideB == sideC && sideB == sideD && sideC == sideD) {
			if (angleA == 90 && angleB == 90 && angleC == 90 && angleD == 90) {
				return true;
			}
		}
		return false;
	}

	virtual void print_sides() {
		std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
	}

	virtual void print_angles() {
		std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
	}

private:
	int sideA, sideB, sideC, sideD;
	int angleA, angleB, angleC, angleD;
};

class Parallelogram : public Figure {
public:
	Parallelogram(int sideA, int sideB, int angleA, int angleB, int sides) : Figure("Parallelogram", 0) {
		this->sideA = sideA;
		this->sideB = sideB;
		sideC = sideA;
		sideD = sideB;

		this->angleA = angleA;
		this->angleB = angleB;
		angleC = angleA;
		angleD = angleB;

		this->sides = sides;
	}

	void print() override {
		std::cout << name << ":" << std::endl;
		if (check()) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << sides << std::endl;
		std::cout << "Стороны: ";
		print_sides();
		std::cout << std::endl;
		std::cout << "Углы: ";
		print_angles();
	}

protected:
	bool check() override {
		if (sideA == sideC && sideB == sideD) {
			if (angleA == angleC && angleB == angleD) {
				return true;
			}
		}
		return false;
	}

	virtual void print_sides() {
		std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
	}

	virtual void print_angles() {
		std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
	}

private:
	int sideA, sideB, sideC, sideD;
	int angleA, angleB, angleC, angleD;
};

class Rhombus : public Figure {
public:
	Rhombus(int sideA, int angleA, int angleB, int sides) : Figure("Rhombus", 0) {
		this->sideA = sideA;
		sideB = sideA;
		sideC = sideA;
		sideD = sideA;

		this->angleA = angleA;
		this->angleB = angleB;
		angleC = angleA;
		angleD = angleB;
	}

	void print() override {
		std::cout << name << ":" << std::endl;
		if (check()) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << sides << std::endl;
		std::cout << "Стороны: ";
		print_sides();
		std::cout << std::endl;
		std::cout << "Углы: ";
		print_angles();
	}

protected:
	bool check() override {
		if (sideA == sideB && sideA == sideC && sideA == sideD && sideB == sideC && sideB == sideD && sideC == sideD) {
			if (angleA == angleC && angleB == angleD) {
				return true;
			}
		}
		return false;
	}

	virtual void print_sides() {
		std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
	}

	virtual void print_angles() {
		std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
	}

private:
	int sideA, sideB, sideC, sideD;
	int angleA, angleB, angleC, angleD;
};

void print(Figure& figure) {
	figure.print();
	std::cout << std::endl;
}

int main() {
	Figure figure("Figure", 0);
	Triangle trian(10, 20, 30, 50, 60, 70, 3);
	Right right(10, 20, 30, 50, 60, 3);
	Isosceles isos(10, 20, 50, 60, 3);
	Equilateral equil(10, 3);
	Quadrilateral quad(10, 20, 30, 40, 50, 60, 70, 80, 4);
	Rectangle rect(10, 20, 4);
	Square square(20, 4);
	Parallelogram parall(20, 30, 30, 40, 4);
	Rhombus rhombus(30, 30, 40, 4);

	print(figure);
	print(trian);
	print(right);
	print(isos);
	print(equil);
	print(quad);
	print(rect);
	print(square);
	print(parall);
	print(rhombus);

	return 0;
}