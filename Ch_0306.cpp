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
		cout << "s4�� s5�� �����ϴ�.\n";
	// string
	// ���ڿ��� ũ�Կ� ���� ������ ������
	// Ŭ���� ������ ���ڿ� ũ�⿡ �°� ���� ���۸� ������
	// ��ü ������
	// c-string���� �ٷ�� ����

	string s6;
	getline(cin, s6);
	// getline / cin.getline�� �ٸ�
	// getline()�� �迭�� �ƴ϶� stringŸ���� �̿��� ���ڿ��� �Է¹��� �� �ִ� ���
	// cin.getline()�� �迭�� �̿��� ������ �� ���ڿ��� �Է¹޴� ���

	return 0;
}