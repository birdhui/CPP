#include <iostream>
using namespace std;

int main() {
	cout << "�ּҸ� �Է��ϼ��� >> ";

	char address[100];
	cin.getline(address, 100, '\n');

	// cin getline (char buf[ ], int size, char delimitChar)
	// cin.getline -> ������ �� ���ڿ��� �Է¹޴� ���
	// '\n'�� ������ �Է��ߴܵǱ� ������ �ٿ���� ��

	cout << "�ּҴ� " << address << "�Դϴ�.\n";

	return 0;
}