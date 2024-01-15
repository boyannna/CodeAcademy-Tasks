#include<iostream>
#include "PenProduct.h"
#include "Product.h"

E_ProductType PenProduct::getType() {
	return E_ProductTypePen;
}

void PenProduct::Serialize(std::ostream& out) {

	Product::Serialize(out);
	out << m_inkColor;
}
void PenProduct::DeSerialize(std::istream& in) {

	Product::DeSerialize(in);
	int inkColor = 0;
	in >> inkColor;
	m_inkColor = static_cast<E_Color>(inkColor);
}
