#include "seller.h"
#include <vector>



seller::seller()
{
	product();
	seller_name = "NULL";
	seller_id = NULL;
	seller_email = "NULL";
}

seller::seller(int id, string name, string email) {
	product();
	seller_name = name;
	seller_email = email;
	seller_id = id;
}

int seller::set_sid(int x) {
	seller_id = x;
	return seller_id;
}

int seller::get_sid() {
	return seller_id;
}

string seller::set_semail(string x) {
	seller_email = x;
	return seller_email;
}

string seller::get_semail() {
	return seller_email;
}

string seller::set_sname(string x) {
	seller_name = x;
	return seller_name;
}

string seller::get_sname() {
	return seller_name;
}

void seller::add_new_product(product x) {
	
	list_of_products.push_back(x);	

}


seller::~seller()
{
}
