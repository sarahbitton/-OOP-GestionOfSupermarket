#include "fruit.h"
#include <iostream>

using namespace std;

Fruit::Fruit(int identification_number) : Farmer(2, identification_number) {
	cout << "Enter the sugar quantity (in gr for 100g): " << endl;
	cin >> this->sugar_quantity;
	if (this->sugar_quantity > 100) {
		return;
	}
}

int Fruit::price(int publicity_factor) {
	return Farmer::price(publicity_factor) + (this->sugar_quantity / 2);
}

void Fruit::print()
{
	Farmer::print();
	cout << " (" << this->sugar_quantity << ")";
}
