#include <iostream>
using namespace std;

int bigger(int num1, int num2);		// bigger() �Լ� ���� ����
int divideBy3(int num);				// divideBy3() �Լ� ���� ����

// �� ���� ������ �޾� ū ���� �����ϴ� �Լ�
int bigger(int num1, int num2) {
	return (num1 > num2) ? num1: num2;	// num1�� num2���� ũ�ٸ� num1�� �����ϰ� �ƴ϶�� num2�� ����
}

// �Ű� ������ 3���� ���������� true, �ƴϸ� false�� �����ϴ� �Լ�
int divideBy3(int num) {			// �Ű� ������
	if (num % 3 == 0)				// 3���� ������ ��������
		return true;				// return true
	else
		return false;
}

int main() {
	int a, b, n;

	cout << "�� ���� ���� �Է� >> ";
	cin >> a >> b;

	n = bigger(a, b);				// ū ���� �����ϴ� �Լ� bigger() ȣ��
	cout << a << "�� " << b << " �� ū ���� " << n << "�Դϴ�.\n";

	if (divideBy3(n) == 1) {		// 3�� ��� Ȯ���ϴ� �Լ��� true���� false����
		cout << n << "��" << " 3�� ����Դϴ�.\n";
	}
	else
		cout << n << "��" << " 3�� ����� �ƴմϴ�.\n";
}