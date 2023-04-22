#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() : Circle(1) { }	// ���� ������ : Ÿ�� �����ڸ� ȣ���ϴ� ������ -> ��ü �ʱ�ȭ�� Ÿ�� �����ڿ� ����

Circle::Circle(int r) {				// Ÿ�� ������ : ��ü �ʱ�ȭ�� �����ϴ� ������
	radius = r;
	cout << "������ " << radius << "�� ����" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;		// �Ű� ���� ���� ������ ȣ��
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza(30);
	cout << "pizza ������ " << pizza.getArea() << endl;

	return 0;
}