#include<iostream>
#include<fstream>
#include "Product.h"

void Product::Serialize(std::ostream& out) {

	out << m_price;
}
void Product::DeSerialize(std::istream& in) {

	in >> m_price;
}
