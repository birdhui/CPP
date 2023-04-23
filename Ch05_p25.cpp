#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza;
	pizza.radius = 3;
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}

// Circle 클래스를 C++구조체를 이용해 재작성한 코드
double Circle(int x);

double Circle(int x) {
	return 3.14 * x * x;
}

int main() {
	int radius;
	cout << "반지름을 입력하세요 >>";
	cin >> radius;

	cout << "면적은 " << Circle(radius) << endl;

	return 0;
}