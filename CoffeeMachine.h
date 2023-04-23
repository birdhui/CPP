#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H

class CoffeeMachine {
	int coffee = 0, water = 0, sugar = 0;
public:
	CoffeeMachine(int c, int w, int s);
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void fill();
	void show();
};

#endif