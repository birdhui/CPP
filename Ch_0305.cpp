#include <iostream>
using namespace std;

int main() {
	cout << "주소를 입력하세요 >> ";

	char address[100];
	cin.getline(address, 100, '\n');

	// cin getline (char buf[ ], int size, char delimitChar)
	// cin.getline -> 공백이 낀 문자열을 입력받는 방법
	// '\n'을 만나면 입력중단되기 때문에 붙여줘야 함

	cout << "주소는 " << address << "입니다.\n";

	return 0;
}