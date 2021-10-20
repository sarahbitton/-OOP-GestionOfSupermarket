#pragma once
#include "product.h"

class Box : public Product
{
	int products_num;
	string* product_names;
	int colors_num;
public:
	Box(int identification_number);
	int price(int publicity_factor);
	void print();
};

