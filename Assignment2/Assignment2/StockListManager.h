#pragma once
#include <iostream>
#include "Stock.h"
#include "StockListType.h"

//STOCK LIST MANGER CLASS

class StockListManager : public StockListType
{
private:
	//NULL
public:
	void printReportBySymb();
	void printReportBYGain();
	StockListManager();
	~StockListManager();

	
};
