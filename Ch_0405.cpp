// ��������� �ʱ�ȭ�� ���� ������ Ȱ��
#include <iostream>
using namespace std;

class Point {
	int x, y;		// public ���� ������ �Ǿ� �ֱ� ������ ������ -> main�Լ����� �Ⱥ���
public:
	Point();
	Point(int a, int b);
	void show() { cout << "(" << x << "," << y << ")" << endl; }
};

Point::Point() : Point(0, 0) { }	// ���� �����ڿ� Ÿ�� ������ �ڿ��� �����ݷ��� ������ �ʴ´�.
Point::Point(int a, int b) { x = a; y = b; }

int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}