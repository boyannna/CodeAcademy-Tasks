#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<sstream>
#include "ProductManager.h"
#include "Product.h"
#include "BookProduct.h"

void ProductManager::SerializeProducts(const std::string& fileName) {
	
	std::ofstream outputfile(fileName);

	if (!outputfile) {
		std::cout << "Error";
		return;
	}

	for (int i = 0; i < m_products.size(); i++) {
		outputfile << m_products[i]->getType() << '#';
	}
}
void ProductManager::DeserializeProducts(const std::string& fileName) {
	
	std::ifstream inputFile(fileName);
	if(!inputFile){
		return;
	}
	std::string str1;
	while (std::getline(inputFile, str1)) {
		int prodType = 0;
		std::istringstream iss(str1);
		iss >> prodType;
		Product* newItem;
		switch (prodType) {
		case E_ProductTypeBook: {
			newItem = new BookProduct();
		}break;
		case E_ProductTypePen: {
			newItem = new BookProduct();
		}break;
		case E_ProductTypeSeries: {
			newItem = new BookProduct();
		}break;

		default:
			break;
		}
		newItem->DeSerialize(iss);
		m_products.push_back(newItem);
	}
}
