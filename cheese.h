#pragma once
#include "milk.h"

class Cheese : public Milk 
{
	int cheese_additions_num;
public:
	Cheese(int identification_number);
	int price(int publicity_factor);
	void print();
};

