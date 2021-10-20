#include "elsemilk.h"
#include <iostream>

using namespace std;

Elsemilk::Elsemilk(int identification_number) : Milk(4, identification_number) {
	cout << "Enter the Parve elements number: " << endl;
	cin >> this->parve_elements_num;
	
	this->parve_element_names = new string[this->parve_elements_num];
	for(int i = 0; i < this->parve_elements_num; i++) {
		cout << "Enter the name of the Parve element " << i + 1 << " : " << endl;
		cin >> this->parve_element_names[i];
	}
}

int Elsemilk::price(int publicity_factor) {
	return Milk::price(publicity_factor) + (this->parve_elements_num * 5);
}

void Elsemilk::print()
{
	Milk::print();
	cout << " ";
	for (int i = 0; i < this->parve_elements_num; i++) {
		cout << this->parve_element_names[i];
		if (i != this->parve_elements_num - 1) {
			cout << ",";
		}
	}
	cout << " (" << this->parve_elements_num << ")";
}
