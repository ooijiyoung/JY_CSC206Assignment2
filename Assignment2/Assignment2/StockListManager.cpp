#include "Stock.h"
#include "StockListManager.h"
#include <iostream>
#include "JiYoung.h"

void StockListManager::printReportBYGain() {
	int j;
	Stock* temp;
	for (int i = 0; i < stockSize - 1; i++) {
		j = i;
		while (j > 0 && stock[j]->getPercent() < stock[j - 1]->getPercent()) {
			temp = stock[j];
			stock[j] = stock[j - 1];
			stock[j - 1] = temp;
			j--;
		}
	}
	printHead();
	printStock();
	printTrail();
}

//print the report by symbols
void StockListManager::printReportBySymb() {
	int j;
	Stock* temp;
	for (int i = 0; i < stockSize - 1; i++) {
		j = i;
		while (j > 0 && stock[j]->getSymbol() < stock[j - 1]->getSymbol()) {
			temp = stock[j];
			stock[j] = stock[j - 1];
			stock[j - 1] = temp;
			j--;
		}
	}
	printHead();
	printStock();
	printTrail();
}

//selection after selecting the sorting option
void StockListManager::sort() {
	bool valid = false;
	while (valid == false) {
		ojy.clrscr();
		cout << "Stock Listing Management" << endl;
		ojy.printRpt("-", 30);
		cout << endl << "1. Sort and Print Stock by Percent Gain" << endl;
		cout << "2. Sort and Print Stock by Symbol" << endl;
		cout << "3. Back To Menu" << endl << "Enter Selection: ";
		int selection;
		cin >> selection; //Input Validation
		ojy.clrBuffer();

		switch (selection)
		{
		case 1:
			ojy.clrscr();
			printReportBYGain();
			ojy.getch();
			valid = true;
			break;
		case 2:
			ojy.clrscr();
			printReportBySymb();
			ojy.getch();
			valid = true;
			break;
		case 3:
			valid = true;
			break;
		default:
			cout << "Invalid Entry, Please Retry" << endl;
			ojy.getch();
			break;
		}
	}
	
}

StockListManager::StockListManager(){
}

StockListManager::~StockListManager(){
	for (int i = 0; i < stockSize; i++)
		delete stock[i];
	cout << "Stock deleted";
}
