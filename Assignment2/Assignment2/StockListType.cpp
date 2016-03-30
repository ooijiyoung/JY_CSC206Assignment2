#include "StockListType.h"
#include "StockListManager.h"
#include <iostream>
#include "JiYoung.h"

extern JiYoung ojy;
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