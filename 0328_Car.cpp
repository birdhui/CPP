#include <iostream>
using namespace std;

// Ŭ���� Car �����
class Car {
public:						// ���� ���� : public (����)
	int speed, gear;		// Ŭ���� ��� ���� ����
	string color, brand;	// �߰��� ������� : brand
	void speedUp();			// ��� �Լ� : �ӵ� �ø��� �Լ�
	void speedDown();		// ��� �Լ� : �ӵ� ���̴� �Լ�
};

// Ŭ���� ������
void Car::speedUp()			// �Լ� ������ �� :: ���������� �� ���
{
	speed += 10;
	cout << "���� �ӵ� : " << speed << endl;
}

// Ŭ���� ������
void Car::speedDown()
{
	speed -= 10;
	cout << "���� �ӵ� : " << speed << endl;
}

int main()
{
	Car myCar;					// ù ��° ��ü
	Car yourCar;				// �� ��° ��ü
	
	myCar.speed = 100;			// ��ü�� ��� ���� ����
	myCar.gear = 3;
	myCar.color = "red";
	myCar.brand = "HYUNDAI";	// ������ Ŭ���� �������

	yourCar.speed = 50;
	yourCar.gear = 1;
	yourCar.color = "red";
	myCar.brand = "KIA";

	myCar.speedUp();			// ��ü�� ����Լ� ȣ��
	myCar.speedDown();
	yourCar.speedUp();
	yourCar.speedDown();

	return 0;
}