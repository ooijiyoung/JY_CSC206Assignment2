#pragma once
#ifndef _STOCKLIST_
#define _STOCKLIST_

class StockListType
{
public:
	StockListType();
	~StockListType();
protected:

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