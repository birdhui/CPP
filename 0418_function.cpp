#include <iostream>
using namespace std;

int bigger(int num1, int num2);		// bigger() 함수 원형 선언
int divideBy3(int num);				// divideBy3() 함수 원형 선언

// 두 개의 정수를 받아 큰 값을 리턴하는 함수
int bigger(int num1, int num2) {
	return (num1 > num2) ? num1: num2;	// num1이 num2보다 크다면 num1을 리턴하고 아니라면 num2를 리턴
}

// 매개 변수가 3으로 나누어지면 true, 아니면 false를 리턴하는 함수
int divideBy3(int num) {			// 매개 변수가
	if (num % 3 == 0)				// 3으로 나누어 떨어지면
		return true;				// return true
	else
		return false;
}

int main() {
	int a, b, n;

	cout << "두 개의 정수 입력 >> ";
	cin >> a >> b;

	n = bigger(a, b);				// 큰 값을 리턴하는 함수 bigger() 호출
	cout << a << "과 " << b << " 중 큰 값은 " << n << "입니다.\n";

	if (divideBy3(n) == 1) {		// 3의 배수 확인하는 함수가 true인지 false인지
		cout << n << "은" << " 3의 배수입니다.\n";
	}
	else
		cout << n << "은" << " 3의 배수가 아닙니다.\n";
}