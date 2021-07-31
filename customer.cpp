#include "customer.h"



customer::customer()
{
	cid = NULL;
	cname = "NULL";
	caddress = "NULL";
	cphonenumber = NULL;
	cemail = "NULL";

}
customer::customer(int id, string name, string address, int number, string email) {
	cid = id;
	cname = name;
	caddress = address;
	cphonenumber = number;
	cemail = email;
}
int customer::get_cid() {
	return cid;
}
int customer::set_cid(int x) {
	cid = x;
	return cid;
}
string customer::get_cname() {
	return cname;
}
string customer::set_cname(string x) {
	cname = x;
	return cname;
}
string customer::get_caddress() {
	return caddress;
}
string customer::set_caddress(string x) {
	caddress = x;
	return caddress;
}
int customer::get_cnumber() {
	return cphonenumber;
}
int customer::set_cnumber(int x) {
	cphonenumber = x;
	return cphonenumber;
}
string customer::get_cemail() {
	return cemail;
}
string customer::set_cemail(string x) {
	cemail = x;
	return cemail;
}


customer::~customer()
{
}
