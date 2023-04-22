#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double area();
};

Circle::Circle() : Circle(1) { }	// 위임 생성자

Circle::Circle(int r) {		// 타겟 생성자
	radius = r;
	cout << "반지름 " << radius << "원 생성" << endl;
}

double Circle::area() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	double area = donut.area();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30);	// 매개 변수 있는 생성자 호출
	area = pizza.area();
	cout << "pizza 면적은 " << area << endl;
}