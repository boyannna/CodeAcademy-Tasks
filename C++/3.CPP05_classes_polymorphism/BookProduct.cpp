#include<iostream>
#include "BookProduct.h"
#include "Product.h"

E_ProductType BookProduct::getType() {
	return E_ProductTypeBook;
}