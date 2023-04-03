#include <iostream>
using namespace std;

// 클래스 Car 선언부
class Car {
public:						// 접근 권한 : public (오픈)
	int speed, gear;		// 클래스 멤버 변수 선언
	string color, brand;	// 추가한 멤버변수 : brand
	void speedUp();			// 멤버 함수 : 속도 올리는 함수
	void speedDown();		// 멤버 함수 : 속도 줄이는 함수
};

// 클래스 구현부
void Car::speedUp()			// 함수 선언할 때 :: 범위지정자 꼭 찍기
{
	speed += 10;
	cout << "현재 속도 : " << speed << endl;
}

// 클래스 구현부
void Car::speedDown()
{
	speed -= 10;
	cout << "현재 속도 : " << speed << endl;
}

int main()
{
	Car myCar;					// 첫 번째 객체
	Car yourCar;				// 두 번째 객체
	
	myCar.speed = 100;			// 객체의 멤버 변수 접근
	myCar.gear = 3;
	myCar.color = "red";
	myCar.brand = "HYUNDAI";	// 나만의 클래스 멤버변수

	yourCar.speed = 50;
	yourCar.gear = 1;
	yourCar.color = "red";
	myCar.brand = "KIA";

	myCar.speedUp();			// 객체의 멤버함수 호출
	myCar.speedDown();
	yourCar.speedUp();
	yourCar.speedDown();

	return 0;
}