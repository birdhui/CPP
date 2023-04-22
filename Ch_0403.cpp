#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();			// 매개 변수 없는 생성자
	Circle(int r);		// 매개 변수 있는 생성자
	double getArea();
};

Circle::Circle() {		// 매개 변수 없는 생성자
	radius = 1;
	cout << "반지름 " << radius << "원 생성" << endl;
}

Circle::Circle(int r) {	// 매개 변수 있는 생성자
	radius = r;
	cout << "반지름 " << radius << "원 생성" << endl;
}

double Circle::getArea() {	// 함수
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30);
	cout << "pizza 면적은 " << pizza.getArea() << endl;
	return 0;
}
