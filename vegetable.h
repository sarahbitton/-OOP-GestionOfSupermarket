#pragma once
#include "farmer.h"

class Vegetable : public Farmer 
{
	int vitamins_num;
public:
	Vegetable(int identification_number);
	int price(int publicity_factor);
	void print();
};

