#include "StockListType.h"
#include "StockListManager.h"
#include <iostream>
#include "JiYoung.h"
#include <fstream>
#include <Windows.h>

//header
void StockListType::printHead() {
	ojy.printRpt("*", 30);
	cout << "   JY Solutions ";
	ojy.setw("   JY Solutions ", 20);
	ojy.printRpt("*", 30);
	cout << endl;
	ojy.printRpt("*", 30);
	cout << " Financial Report ";
	ojy.setw(" Financial Report ", 20);
	ojy.printRpt("*", 30);
	cout << endl;
	cout << "Stock           Today";
	ojy.setw("Stock           Today", 40);
	cout << "Previous  Percent";
	cout << endl;

	cout << "Symbol";
	ojy.setw("Symbol", 8);
	cout << "Open"; ojy.setw("Open", 8); cout << "Close"; ojy.setw("Close", 8);
	cout << "High"; ojy.setw("High", 8); cout << "Low"; ojy.setw("Low", 8);
	cout << "Close"; ojy.setw("Close", 10); cout << "Gain"; ojy.setw("Gain", 15);
	cout << "Volume" << endl;

	cout << "-----";
	ojy.setw("-----", 8);
	cout << "-----"; ojy.setw("-----", 8); cout << "-----"; ojy.setw("-----", 8);
	cout << "-----"; ojy.setw("-----", 8); cout << "-----"; ojy.setw("-----", 8);
	cout << "--------"; ojy.setw("--------", 10); cout << "--------"; ojy.setw("--------", 15);
	cout << "--------" << endl;
}

//footer
void StockListType::printTrail() {
	double closeAss=0.0; //Closing Asset
	for (int x = 0; x < stockSize - 1; x++) {
		closeAss += stock[x]->getClosing() * stock[x]->getShares();
	}
	cout << "Closing Assets: $" << closeAss <<endl;
	ojy.printRpt("-x", 40);
}

//print stock
void StockListType::printStock() {
	for (int x = 0; x < stockSize - 1; x++) {
		cout << stock[x]->getSymbol();
		ojy.setw(stock[x]->getSymbol(), 8);
		cout << ojy.doubleToStrPrecis(stock[x]->getOpening(),2); ojy.setw(ojy.doubleToStrPrecis(stock[x]->getOpening(), 2), 8); 
		cout << ojy.doubleToStrPrecis(stock[x]->getClosing(), 2); ojy.setw(ojy.doubleToStrPrecis(stock[x]->getClosing(), 2), 8);
		cout << ojy.doubleToStrPrecis(stock[x]->getHighPrice(), 2); ojy.setw(ojy.doubleToStrPrecis(stock[x]->getHighPrice(), 2), 8); 
		cout << ojy.doubleToStrPrecis(stock[x]->getLowPrice(), 2); ojy.setw(ojy.doubleToStrPrecis(stock[x]->getLowPrice(), 2), 8);
		cout << ojy.doubleToStrPrecis(stock[x]->getPrevPrice(), 2); ojy.setw(ojy.doubleToStrPrecis(stock[x]->getPrevPrice(), 2), 10);
		cout << ojy.doubleToStrPrecis(stock[x]->getPercent(), 2)<<"%"; ojy.setw(ojy.doubleToStrPrecis(stock[x]->getPercent(), 2), 14);
		cout << stock[x]->getShares() << endl;
	}
}

void StockListType::setStockSize(int x) {
	stockSize = x;
}

int StockListType::getStockSize() {
	return stockSize;
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
			if (stock == NULL)
			{
				cout << "Error allocating memory!\n";
				
			}
			fileIn >> *stock[totalStockNo];
			totalStockNo++;
		}
	}
	else {
		cout << "Error: File Not Found!" << endl;
		MessageBox(NULL, L"Unable to read or open file.\n Please make sure \"Stock.txt\" is accessible and in the same directory.\nThis program will be terminated", L"Error", MB_OK | MB_ICONERROR);
		exit(1);
	}
	
	setStockSize(totalStockNo + 1); //cause 
}
StockListType::~StockListType() {
	//virtual 
}