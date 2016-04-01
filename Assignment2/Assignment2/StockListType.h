#pragma once
#include "Stock.h"
#ifndef _STOCKLISTTYPE_
#define _STOCKLISTTYPE_

class StockListType
{
private:
	Stock * stock;
	int stockList;
public:
	StockListType();
	~StockListType();
	virtual void printReportSymb();
	virtual void printReportGain();

};

#endif _STOCKLISTTYPE_