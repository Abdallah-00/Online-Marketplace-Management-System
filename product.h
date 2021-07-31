#pragma once
#include <iostream> 
#include <string>
#include <vector>

using namespace std;
class product
{
	int product_id;
	string product_name;
	float price;
	string category;
	
	

public:
	static vector<product> list_of_products;
	product();
	product(int pid, string pn, float p, string c);
	int set_id(int id);
	string set_product_name(string name);
	float set_price(float price);
	string set_category(string category);
	int get_id();
	string get_product_name();
	float get_price();
	string get_category();
	
	~product();
};

