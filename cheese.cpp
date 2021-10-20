#include "cheese.h"
#include <iostream>

using namespace std;

Cheese::Cheese(int identification_number = -1) : Milk(3, identification_number) {
	cout << "Enter the cheese additions number: " << endl;
	cin >> this->cheese_additions_num;
}

int Cheese::price(int publicity_factor) {
	return Milk::price(publicity_factor) + this->cheese_additions_num;
}

void Cheese::print()
{
	Milk::print();
	cout << " (" << this->cheese_additions_num << ")";
}
