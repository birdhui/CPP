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
	cout << "donut ������ " << area << endl;

	Circle pizza;
	pizza.radius = 3;
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;
}

// Circle Ŭ������ C++����ü�� �̿��� ���ۼ��� �ڵ�
double Circle(int x);

double Circle(int x) {
	return 3.14 * x * x;
}

int main() {
	int radius;
	cout << "�������� �Է��ϼ��� >>";
	cin >> radius;

	cout << "������ " << Circle(radius) << endl;

	return 0;
}