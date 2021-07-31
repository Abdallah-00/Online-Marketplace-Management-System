#include "product.h"
#include<vector>



product::product()
{
	product_id = NULL;
	product_name = "NULL";
	price = NULL;
	category = "NULL";
}
product::product(int pid, string pn, float p, string c) {
	product_id = pid;
	product_name = pn;
	price = p;
	category = c;
}

int product::set_id(int id) {
	product_id = id;
	return product_id;
}

string product::set_product_name(string name) {
	product_name = name;
	return product_name;
}

float product::set_price(float xprice) {
	price = xprice;
	return price;
}

string product::set_category(string xcategory) {
	category = xcategory;
	return category;
}

int product::get_id() {
	return product_id;
}

string product::get_category() {
	return category;
}

string product::get_product_name() {
	return product_name;
}

float product::get_price() {
	return price;
}



product::~product()
{
}
