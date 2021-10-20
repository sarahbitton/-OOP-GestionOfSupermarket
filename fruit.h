#pragma once
#include "farmer.h"

class Fruit : public Farmer 
{
	int sugar_quantity;
public:
	Fruit(int identification_number);
	int price(int publicity_factor);
	void print();
};

