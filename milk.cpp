#include "milk.h"
#include <iostream>

using namespace std;

Milk::Milk(int milk_product_type, int identification_number) : Product(2, identification_number) {
	this->milk_product_type = milk_product_type;

	cout << "Enter the name : " << endl;
	cin >> this->name;

	cout << "Enter the number of colors in the box : " << endl;
	cin >> this->colors_num;

	cout << "Enter the fat percentage: " << endl;
	cin >> this->fat_percentage;
	if (this->fat_percentage > 100) {
		return;
	}
}

int Milk::price(int publicity_factor) {
	return (Product::price(publicity_factor) + this->colors_num - this->fat_percentage) * this->milk_product_type;
}

void Milk::print()
{
	Product::print();
	cout << " " << this->name << " (" << this->milk_product_type << "," << this->colors_num << "," << this->fat_percentage << ")";
}
