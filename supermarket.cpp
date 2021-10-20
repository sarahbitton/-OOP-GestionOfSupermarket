#include "supermarket.h"
#include "fruit.h"
#include "vegetable.h"
#include "elsemilk.h"
#include "box.h"
#include "cheese.h"

Supermarket::Supermarket(string name, int publicity_factor)
{
	this->name = name;
	this->publicity_factor = publicity_factor;
	this->products_num = 0;
	this->products_array = NULL;
}

Supermarket::~Supermarket()
{
if (this->products_num == 0) return;
for (int i = 0; i < this->products_num; i++)
	delete this->products_array[i];
delete[] this->products_array;
}

void Supermarket::addProduct() {
	Product** temp = new Product * [this->products_num + 1];
	for (int i = 0; i < this->products_num; i++) {
		temp[i] = this->products_array[i];
	}

	cout << "Sub Menu : " << endl;
	cout << "************" << endl;
	cout << "1) Fruit" << endl;
	cout << "2) Vegetable" << endl;
	cout << "3) Cocktail" << endl;
	cout << "4) Yogurt" << endl;
	cout << "5) Cheese" << endl;
	cout << "6) Other milk product" << endl;
	cout << "7) Box" << endl;
	cout << "Which product you want to add? " << endl;
	int choice;
	cin >> choice;

	int identification_number;
	cout << "Enter the identification number : " << endl;
	cin >> identification_number;
	for (int i = 0; i < this->products_num; i++) {
		if (this->products_array[i]->getIdentificationNumber() == identification_number) {
			cout << "This identification number already exists.";
			return;
		}
	}

	switch (choice) {
	case 1:
		temp[this->products_num] = new Fruit(identification_number);
		break;
	case 2:
		temp[this->products_num] = new Vegetable(identification_number);
		break;
	case 3:
		temp[this->products_num] = new Milk(1, identification_number);
		break;
	case 4:
		temp[this->products_num] = new Milk(2, identification_number);
		break;
	case 5:
		temp[this->products_num] = new Cheese(identification_number);
		break;
	case 6:
		temp[this->products_num] = new Elsemilk(identification_number);
		break;
	case 7:
		temp[this->products_num] = new Box(identification_number);
		break;
	default:
		break;
	}

	delete[] this->products_array;
	this->products_array = temp;
	this->products_num++;

	cout << "Product added..." << endl;
}

void Supermarket::setPublicityFactor(int publicity_factor) {
	this->publicity_factor = publicity_factor;
}

int Supermarket::price() {
	int sum = 0;
	for (int i = 0; i < this->products_num; i++) {
		sum += this->products_array[i]->price(this->publicity_factor);
	}
	return sum;
}

void Supermarket::print() {
	cout << this->name << " " << this->products_num << " " << this->publicity_factor << endl;
	for (int i = 0; i < this->products_num; i++) {
		this->products_array[i]->print();
		cout << endl;
	}
}
