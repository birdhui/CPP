#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();			// �Ű� ���� ���� ������
	Circle(int r);		// �Ű� ���� �ִ� ������
	double getArea();
};

Circle::Circle() {		// �Ű� ���� ���� ������
	radius = 1;
	cout << "������ " << radius << "�� ����" << endl;
}

Circle::Circle(int r) {	// �Ű� ���� �ִ� ������
	radius = r;
	cout << "������ " << radius << "�� ����" << endl;
}

double Circle::getArea() {	// �Լ�
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza(30);
	cout << "pizza ������ " << pizza.getArea() << endl;
	return 0;
}