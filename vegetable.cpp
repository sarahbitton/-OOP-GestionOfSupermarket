#include "vegetable.h"
#include <iostream>

using namespace std;

Vegetable::Vegetable(int identification_number) : Farmer(1, identification_number) {
	cout << "Enter the vitamins number: " << endl;
	cin >> this->vitamins_num;
}

int Vegetable::price(int publicity_factor) {
	return Farmer::price(publicity_factor) + (this->vitamins_num * 2);
}

void Vegetable::print()
{
	Farmer::print();
	cout << " (" << this->vitamins_num << ")";
}
