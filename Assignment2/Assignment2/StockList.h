#pragma once
#include "Stock.h"
#ifndef _STOCKLIST_
#define _STOCKLIST_

class StockListType
{
protected:
	Stock * stock;
	int stockList;
public:
	StockListType();
	~StockListType();
	virtual void printReportSymb();
	virtual void printReportGain();

};

StockListType::StockListType()
{
}

StockListType::~StockListType()
{
}

class StockListManager : protected StockListType
{
public:
	StockListManager();
	~StockListManager();

private:

};

StockListManager::StockListManager()
{
}

StockListManager::~StockListManager()
{
}



#endif _STOCKLIST_