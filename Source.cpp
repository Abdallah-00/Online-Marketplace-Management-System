#include <iostream>
#include <string>
#include <vector>
#include "product.h"
#include "seller.h"
#include "cart.h"
#include"customer.h"
#include<assert.h>

using namespace std;
vector<product> product::list_of_products;

product x(1, "Tomatoes", 5.0, "Vegetables");


void main() {
	
	bool key1 = 1;
	bool key2;
	bool key3;
	string name;
	int id;
	float price;
	
	
    
	
	
	
	while (key1 == 1)
	{
		cout << "Do you want to sell or buy ?" << endl;
		cout << "Press 0 to sell" << endl << "press 1 to buy" << endl;
		cin >> key2;
		assert(key2 == 0 || key2 == 1);
		switch (key2) {
		case 0: {
			seller *sel1 = new seller();
			cout << "Enter seller name" << endl;
			cin >> name;
			sel1->set_sname(name);
			cout << "Enter seller id" << endl;
			cin >> id;
			sel1->set_sid(id);
			cout << "Enter seller email" << endl;
			cin >> name;
			sel1->set_semail(name);
			bool key3;
			cout << "Do you want to add a product ?" << endl << "1 for yes, 0 for no" << endl;
			cin >> key3;
			assert(key3 == 1 || key3 == 0);
			while (key3 == 1) {
				product *p = new product();
				cout << "Enter product name" << endl;
				cin >> name;
				p->set_product_name(name);
				cout << "Enter product id" << endl;
				cin >> id;
				p->set_id(id);
				cout << "Enter product price" << endl;
				cin >> price;
				p->set_price(price);
				cout << "Enter product category" << endl;
				cin >> name;
				p->set_category(name);
				product::list_of_products.push_back(*p);
				cout << "If you want to exit seller mode press 0, if you want to continue press 1" << endl;
				cin >> key3;
			}break; }
		case 1: {
			customer *cus = new customer();
			cout << "Enter customer name" << endl;
			cin >> name;
			cus->set_cname(name);
			cout << "Enter customer id" << endl;
			cin >> id;
			cus->set_cid(id);
			cout << "Enter customer address" << endl;
			cin >> name;
			cus->set_caddress(name);
			cout << "Enter customer phone number" << endl;
			cin >> id;
			cus->set_cnumber(id);
			cout << "Enter customer e-mail" << endl;
			cin >> name;
			cus->set_cemail(name);
			cout << "choose a category by writing its name percisely" << endl;
			for (int i = 0; i < product::list_of_products.size(); i++) {
				bool check = 0;
				for (int j = i - 1; j >= 0; j--)
					if (product::list_of_products[i].get_category() == product::list_of_products[j].get_category() && i != 0)
						check = 1;
				if (check == 0)
					cout << product::list_of_products[i].get_category() << endl;
			}
			cin >> name;
			for (int i = 0; i < product::list_of_products.size(); i++) {
				if (product::list_of_products[i].get_category() == name)
					cout << "id: " << product::list_of_products[i].get_id() << "          name: " << product::list_of_products[i].get_product_name() << endl;
			}
			cout << "Choose products you want to add to your cart by writing its id" << endl;
			key3 = 1;
			while (key3 == 1) {
				cin >> id;
				for (int i = 0; i < product::list_of_products.size(); i++) 
					if (product::list_of_products[i].get_id() == id)
						cus->add_to_cart(product::list_of_products[i]);
				cout << "if you want to add another product press 1 else press 0" << endl;
				cin >> key3;
			}
			cout << endl << endl << endl << "               Receipt" << endl;
			int total = 0;
			for (int i = 0; i < cus->cart_products.size(); i++) {
				cout << "item: " << cus->cart_products[i].get_product_name() << "          price: " << cus->cart_products[i].get_price() << endl;
				total += cus->cart_products[i].get_price();
			}
			cout << "Total price = " << total<<endl;
		}
			
		}
		cout << "if you want to exit press 0 if not press 1" << endl;
		cin >> key1;
	}


	system("pause");
}