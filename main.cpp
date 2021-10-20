#include "supermarket.h"

int main() {
	Supermarket supermarket("SuperShop", 3);

	supermarket.addProduct();
	supermarket.addProduct();
	supermarket.addProduct();

	supermarket.print();

	return 0;
}