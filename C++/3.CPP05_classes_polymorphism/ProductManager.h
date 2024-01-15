#pragma once

class ProductManager {
private:
	std::vector <Product*> m_products;
public:
	void SerializeProducts(const std::string& fileName);
	void DeserializeProducts(const std::string& fileName);
};