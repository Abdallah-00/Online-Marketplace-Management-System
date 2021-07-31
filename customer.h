#pragma once
#include<iostream>
#include <string>
#include "cart.h"
using namespace std;

class customer:public cart
{
	int cid;
	string cname;
	string caddress;
	int cphonenumber;
	string cemail;
	


public:
	customer();
	customer(int, string, string, int, string);
	int set_cid(int);
	int get_cid();
	string set_cname(string);
	string get_cname();
	string set_caddress(string);
	string get_caddress();
	int set_cnumber(int);
	int get_cnumber();
	string set_cemail(string);
	string get_cemail();
	~customer();
};

