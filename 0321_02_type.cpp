// cout와 <<를 이용한 출력
#include <iostream>

/*
int main() {
	int n = 3;
	double num = 28.26;
	std::cout << '#' << 5.5 << '-' << n << "hello" << 1<<'\n';
	std::cout << "n + 5 = " << n + 5 << '\n';
	std::cout << "면적은 " << num;
	return 0;
}
*/

double area(int r);

double area(int r) {
	return 3.14 * r * r;
}

int main() {
	int n = 3;
	char c = '#';
	std::cout << c << 5.5 << '-' << n << "hello" << 1 << '\n';
	std::cout << "n + 5 = " << n + 5 << '\n';
	std::cout << "면적은" << area(n);	// 함수 area()의 리턴값 출력

	return 0;
}