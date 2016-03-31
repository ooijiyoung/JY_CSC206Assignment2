#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include "Stock.h"
#include "JiYoung.h"

using namespace std;

#ifndef _StockListType_
#define _StockListType_

class StockListType {
	JiYoung ojy;
private:
	Stock *stock[20];
	int stockSize;
public:
	virtual void printReportBySymb()=0;
	virtual void printReportBYGain()=0;
	virtual void sort()=0;
	void printHead();
	void printTrail();
	void printStock();
	//setter
	void setStockSize(int x);
	//getter
	int getStockSize();
	StockListType();
	~StockListType();
};



#endif // !_StockListType_
