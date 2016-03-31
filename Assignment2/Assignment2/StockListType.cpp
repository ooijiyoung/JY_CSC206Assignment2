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

StockListType::StockListType() {
	//read stock file
	ifstream fileIn;
	string tmp;
	int totalStockNo=0;
	fileIn.open("stock.txt");
	if (fileIn.is_open()) {
		while (!fileIn.eof()) {
			cout << totalStockNo;
			stock = new Stock[7];
			fileIn >> stock[totalStockNo];
			totalStockNo++;
		}
	}
	for (int x = 0; x < totalStockNo; x++) {
		cout << stock[x].getSymbol() << endl;
	}
}
StockListType::~StockListType() {

}