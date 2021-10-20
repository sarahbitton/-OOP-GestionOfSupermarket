#pragma once
#include"product.h"
#include"iostream"
class Supermarket
{
	string name;
	int publicity_factor;
	int products_num;
	Product** products_array;

public:
	Supermarket(string name, int publicity_factor);
	~Supermarket();
	void addProduct();
	void setPublicityFactor(int publicity_factor);
	void print();
	int price();

};

