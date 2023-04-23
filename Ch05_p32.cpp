#include <iostream>
using namespace std;

#include "CoffeeMachine.h"

CoffeeMachine::CoffeeMachine(int c, int w, int s) {
	c = coffee;
	w = water;
	s = sugar;
}

// 커피 1 + 물 1
void CoffeeMachine::drinkEspresso() {
	if (coffee < 1 || water < 1)
		return;
	else
		coffee--;
		water--;
}

// 커피 1 + 물 2
void CoffeeMachine::drinkAmericano() {
	if (coffee < 1 || water < 2)
		return;
	else
		coffee--;
		water -= 2;
}

// 커피 1 + 물 2 + 설탕 1
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

// 커피 머신 상태 출력
void CoffeeMachine::show() {
	cout << "커피 머신 상태, " << "커피:" << coffee << " 물:" << water << " 설탕:" << sugar << endl;
}