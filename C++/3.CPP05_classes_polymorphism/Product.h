#pragma once

enum E_ProductType {
	E_ProductTypeBook,
	E_ProductTypePen,
	E_ProductTypeSeries
};

class Product {
private:
//protected:
	typedef double moneyType ;
	moneyType m_price;
public:
	virtual E_ProductType getType() = 0;
	virtual ~Product() {};
	virtual void Serialize(std::ostream& out);
	virtual void DeSerialize(std::istream& in);
	friend class ProductManager;

};

class InputStream{};
class OutputStream{};