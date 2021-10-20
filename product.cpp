#include <iostream>
#include "product.h"

using namespace std;

Product::Product(int product_type, int identification_number) {
	this->identification_number = identification_number;

	cout << "Enter the place in supermarket : " << endl;
	cin >> this->place;
	if (this->place.size() != 2 || !(this->place[0] >= 'A' && this->place[0] <= 'Z') || !(this->place[1] >= '1' && this->place[1] <= '5')) {
		cout << "This place is not correct." << endl;
		return;
	}

	cout << "Enter the quantity : " << endl;
	cin >> this->quantity;

	this->product_type = product_type;

	cout << "Enter the zone of the product : " << endl;
	cout << "(1) Hidden (2) Partially visible (3) Visible" << endl;
	cin >> this->zone;
	if (!(1 <= this->zone <= 3)) {
		cout << "This zone is not correct." << endl;
		return;
	}

}

int Product::price(int publicity_factor)
{
	return this->quantity * this->zone * publicity_factor;
}

void Product::print()
{
	cout << this->identification_number << " " << place[0] << " " << place[1] << "(" << this->quantity << "," << this->product_type << "," << this->zone << ")";
}

void Product::setQuantity(int quantity) {
	this->quantity = quantity;
}

int Product::getIdentificationNumber() {
	return this->identification_number;
}