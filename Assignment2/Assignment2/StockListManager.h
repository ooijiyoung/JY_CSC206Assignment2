#pragma once
#include <iostream>
#include "Stock.h"
#include "StockListType.h"
#include "JiYoung.h"
//STOCK LIST MANGER CLASS
class StockListManager : public StockListType
{
	JiYoung ojy;
private:
	//NULL
public:
	void printReportBySymb();
	void printReportBYGain();
	void sort();
	StockListManager();
	~StockListManager();

	
};
