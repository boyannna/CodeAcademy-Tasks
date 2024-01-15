#pragma once

enum E_Color {
	E_ColorRed, 
	E_ColorBlue
};

class PenProduct:public Product {
private:
	E_Color m_inkColor;
public:
	virtual E_ProductType getType();
	virtual void Serialize(std::ostream& out);
	virtual void DeSerialize(std::istream& in);
	friend class ProductManager;
};