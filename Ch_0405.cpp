// 멤버변수의 초기화와 위임 생성자 활용
#include <iostream>
using namespace std;

class Point {
	int x, y;		// public 위로 선언이 되어 있기 때문에 숨겨짐 -> main함수에서 안보임
public:
	Point();
	Point(int a, int b);
	void show() { cout << "(" << x << "," << y << ")" << endl; }
};

Point::Point() : Point(0, 0) { }	// 위임 생성자와 타겟 생성자 뒤에는 세미콜론을 붙이지 않는다.
Point::Point(int a, int b) { x = a; y = b; }

int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}