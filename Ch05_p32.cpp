#include <iostream>
using namespace std;

#include "CoffeeMachine.h"

CoffeeMachine::CoffeeMachine(int c, int w, int s) {
	c = coffee;
	w = water;
	s = sugar;
}

// Ŀ�� 1 + �� 1
void CoffeeMachine::drinkEspresso() {
	if (coffee < 1 || water < 1)
		return;
	else
		coffee--;
		water--;
}

// Ŀ�� 1 + �� 2
void CoffeeMachine::drinkAmericano() {
	if (coffee < 1 || water < 2)
		return;
	else
		coffee--;
		water -= 2;
}

// Ŀ�� 1 + �� 2 + ���� 1
void CoffeeMachine::drinkSugarCoffee() {
	if (coffee < 1 || water < 2 || sugar < 1)
		return;
	else
		coffee--;
		water -= 2;
		sugar--;
}

void CoffeeMachine::fill() {
	coffee = 10;
	water = 10;
	sugar = 10;
}

// Ŀ�� �ӽ� ���� ���
void CoffeeMachine::show() {
	cout << "Ŀ�� �ӽ� ����, " << "Ŀ��:" << coffee << " ��:" << water << " ����:" << sugar << endl;
}