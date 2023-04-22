#include <iostream>
using namespace std;

class Rectangle {
public:
	int width, height;
	int getArea();
};

int Rectangle::getArea() {
	return width * height;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	int area = rect.getArea();
	cout << "»ç°¢ÇüÀÇ ¸éÀûÀº " << area << endl;

	return 0;
}
