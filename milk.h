#pragma once 
#include "product.h"

class Milk : public Product
{
	int milk_product_type;
	string name;
	int colors_num;
	int fat_percentage;
public:
	Milk(int milk_product_type, int identification_number);
	virtual int price(int publicity_factor);
	virtual void print();
};

