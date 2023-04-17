#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2;
	s1 = "hello world";
	s2 = s1;
	cout << s1 << endl;

	string s3 = "abcde";
	cout << s3.size() << endl;

	string s4 = "abcde";
	string s5 = s4;
	if (s4 == s5)
		cout << "s4와 s5는 같습니다.\n";
	// string
	// 문자열의 크게에 따른 제약은 없으며
	// 클래스 스스로 문자열 크기에 맞게 내부 버퍼를 조절함
	// 객체 지향적
	// c-string보다 다루기 쉬움

	string s6;
	getline(cin, s6);
	// getline / cin.getline과 다름
	// getline()은 배열이 아니라 string타입을 이용해 문자열을 입력받을 수 있는 방법
	// cin.getline()은 배열을 이용해 공백이 낀 문자열을 입력받는 방법

	return 0;
}