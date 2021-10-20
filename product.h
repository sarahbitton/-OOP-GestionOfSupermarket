#include <string>

#pragma once

using namespace std;

class Product
{
	int identification_number;
	string place;
	int quantity;
	int product_type;
	int zone;
public:
	Product(int product_type, int identification_number);
	virtual int price(int publicity_factor);
	virtual void print();
	void setQuantity(int quantity);
	int getIdentificationNumber();
};

