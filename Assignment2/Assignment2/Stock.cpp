#include <iostream>
#include <string>
#include "Stock.h"

using namespace std;

//setter
void Stock::setSymbol(string sim) {	symbol = sim;}
void Stock::setPrice(double p) { price = p; }
void Stock::setShares(int s) { shares = s; }
void Stock::setOpening(double o) {oPrice = o;}
void Stock::setClosing(double c) { cPrice = c; }
void Stock::setHighPrice(double h) { hPrice = h; }
void Stock::setLowPrice(double l) { lPrice = l; }
void Stock::setPrevPrice(double pp) { pPrice = pp; }
void Stock::setPercent(double per) { percent = per; }
//getter
string Stock::getSymbol() { return symbol; }
double Stock::getPrice() { return price; }
int Stock::getShares() { return shares; }
double Stock::getOpening() { return oPrice; }
double Stock::getClosing() { return cPrice; }
double Stock::getHighPrice() { return hPrice; }
double Stock::getLowPrice() { return lPrice; }
double Stock::getPrevPrice() { return pPrice; }
double Stock::getPercent() { return percent; }
//Reserved for features


void Stock::setStockInfo(){
	/*
	ask sir about this set stock as there's virtually no way to set the stock as we cant enter it in the console 
	since sir said no input from console
	*/
}

void Stock::printStockInfo() {
	cout << symbol << oPrice << cPrice << hPrice << lPrice << pPrice << percent << shares << endl;
	//tweak it to display multiple rows of information
}

void Stock::CalGainLose() {

}
//TODO constructor - COMING SOON
Stock::Stock() {
	symbol = "NULL";
	price = 0.0;
	shares = 0;
	oPrice = 0;
	cPrice = 0;
	hPrice = 0;
	lPrice = 0;
	pPrice = 0;
	percent = 0;
}

Stock::Stock(string sym, double p, int shr, double oP, double cP, double hP, double lP, double pP, double perc) {
	symbol = sym;
	price = p;
	shares = shr;
	oPrice = oP;
	cPrice = cP;
	hPrice = hP;
	lPrice = lP;
	pPrice = pP;
	percent = perc;
}

ifstream & operator >> (ifstream & fileIn, Stock & s) {
	try
	{
		string line;
		getline(fileIn, line, ' '); //Symbol
		s.symbol = line;
		getline(fileIn, line, ' '); //Opening Price
		s.oPrice = stod(line);
		getline(fileIn, line, ' '); //closing Price
		s.cPrice = stod(line);
		getline(fileIn, line, ' '); //todayHigh
		s.hPrice = stod(line);
		getline(fileIn, line, ' '); //todayLow
		s.lPrice = stod(line);
		getline(fileIn, line, ' '); //prevClose
		s.pPrice = stod(line);
		getline(fileIn, line, ' '); //Volume
		s.shares = stoi(line);
	}
	catch (const std::exception &exc)
	{
		cout << "FATAL" << endl;
		cout << "unhandled exception" << endl;
	}
	return fileIn;
}