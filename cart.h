#pragma once
#include "product.h"
#include <vector>
 class cart:product
{

	
public:
	vector<product> cart_products;
	cart();
	product add_to_cart(product);
	~cart();
};

