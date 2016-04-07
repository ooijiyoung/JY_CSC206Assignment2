#pragma once
#include <fstream>
#include <string>

using namespace std;

#ifndef _STOCK_
#define _STOCK_

class Stock {
private:
	string symbol;
	double price; //stock Price
	int shares; // number of shares (Volume)
	double oPrice; //opening price
	double cPrice; //closing price
	double hPrice; //high price
	double lPrice; //low price
	double pPrice; //previous price
	double percent; //percent gain/loss
public:
	//mutator
	void setSymbol(string);
	void setPrice(double);
	void setShares(int);
	void setOpening(double);
	void setClosing(double);
	void setHighPrice(double);
	void setLowPrice(double);
	void setPrevPrice(double);
	void setPercent(double);
	//accessor
	string getSymbol();
	double getPrice();
	int getShares();
	double getOpening();
	double getClosing();
	double getHighPrice(); 
	double getLowPrice();
	double getPrevPrice();
	double getPercent();
	//features
	void setStockInfo();
	void printStockInfo();
	void CalGainLose();	
	//constructor
	Stock();
	Stock(string s, double p, int shr, double oP, double cP, double hP, double lP, double pP, double perc);
	friend ifstream & operator >> (ifstream & fileIn, Stock &);
};


#endif // !_STOCK_
