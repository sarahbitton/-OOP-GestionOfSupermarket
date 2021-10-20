#include "box.h"
#include <iostream>

using namespace std;

Box::Box(int identification_number) : Product(3, identification_number) {
	cout << "Enter the elements number: " << endl;
	cin >> this->products_num;

	this->product_names = new string[this->products_num];
	for (int i = 0; i < this->products_num; i++) {
		cout << "Enter the name of the element " << i + 1 << " : " << endl;
		cin >> this->product_names[i];
	}

	cout << "Enter the number of colors in the box : " << endl;
	cin >> this->colors_num;
}


int Box::price(int publicity_factor) {
	return (Product::price(publicity_factor) * 2) * this->products_num + (this->colors_num / 3);
}

void Box::print()
{
	Product::print();
	cout << " ";
	for (int i = 0; i < this->products_num; i++) {
		cout << this->product_names[i];
		if (i != this->products_num - 1) {
			cout << ",";
		}
	}
	cout << " (" << this->products_num << "," << this->colors_num << ")";
}