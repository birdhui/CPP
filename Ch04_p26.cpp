#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double area();
};

Circle::Circle() : Circle(1) { }	// ���� ������

Circle::Circle(int r) {		// Ÿ�� ������
	radius = r;
	cout << "������ " << radius << "�� ����" << endl;
}

double Circle::area() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	double area = donut.area();
	cout << "donut ������ " << area << endl;

	Circle pizza(30);	// �Ű� ���� �ִ� ������ ȣ��
	area = pizza.area();
	cout << "pizza ������ " << area << endl;
}