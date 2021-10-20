#pragma once
#include "milk.h"

class Elsemilk : public Milk 
{
	int parve_elements_num;
	string* parve_element_names;
public:
	Elsemilk(int identification_number);
	int price(int publicity_factor);
	void print();
};

