#pragma once
#include <string>
using namespace std;
#ifndef _STOCK_
#define _STOCK_

class Stock {
private:
	string symbol;
	double price; //stock Price
	int shares; // number of shares
	double oPrice; //opening price
	double cPrice; //closing price
	double hPrice; //high price
	double lPrice; //low price
	double pPrice; //previous price
	double percent; //percent gain/loss
public:
	//setter
	void setSymbol(string sim);
	void setPrice(double p);
	void setShares(int s);
	void setOpening(double o);
	void setClosing(double c);
	void setHighPrice(double h);
	void setLowPrice(double l);
	void setPrevPrice(double pp);
	void setPercent(double per);
	//getter
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

};


#endif // !_STOCK_
