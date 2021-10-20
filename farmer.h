#pragma once

#include <string>
#include "product.h"

using namespace std;

class Farmer : public Product 
{
	int farmer_type;
	string name;
	int season;
	int suppliers_num;
public:
	Farmer(int farmer_type, int identification_number);
	virtual void print();
	virtual int price(int publicity_factor);
};
