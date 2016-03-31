#include "StockListType.h"
#include "StockListManager.h"
#include <iostream>
#include "JiYoung.h"
#include <fstream>

void StockListType::printHead() {
	ojy.printRpt("*", 10);
	cout << " JY Solutions ";
	ojy.printRpt("*", 10);
	cout << endl;
	ojy.printRpt("*", 10);
	cout << " Financial Report ";
	ojy.printRpt("*", 10);
	cout << endl;
}

void StockListType::setStockSize(int x) {
	stockSize = x;
}

StockListType::StockListType() {
	//read stock file
	ifstream fileIn;
	string tmp;
	int totalStockNo=0;
	fileIn.open("stock.txt");
	if (fileIn.is_open()) {
		while (!fileIn.eof()) {
			stock[totalStockNo] = new Stock();
			fileIn >> *stock[totalStockNo];
			totalStockNo++;
		}
	}
	//debug
	for (int x = 0; x < totalStockNo; x++) {
		cout << stock[x]->getSymbol() << endl;
	}
	setStockSize(totalStockNo + 1);
}
StockListType::~StockListType() {

}