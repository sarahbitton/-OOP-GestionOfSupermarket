#include <iostream>
#include "farmer.h"

using namespace std;

Farmer::Farmer(int farmer_type, int identification_number) : Product(1, identification_number) {
	this->farmer_type = farmer_type;

	cout << "Enter the name : " << endl;
	cin >> this->name;

	cout << "Enter the number of seasons in the year (1-4) : " << endl;
	cin >> this->season;
	if (!(1 <= this->season <= 4)) {
		cout << "The number of seasons is not correct." << endl;
		return;
	}

	cout << "Enter the suppliers number : " << endl;
	cin >> this->suppliers_num;

}

int Farmer::price(int publicity_factor) {
	return Product::price(publicity_factor) * 3 * (5 - this->season) + (this->suppliers_num * 5) + this->farmer_type;
}

void Farmer::print()
{
	Product::print();
	cout << " " << this->name << " (" << this->farmer_type << "," << this->suppliers_num << "," << this->season << ")";
}
