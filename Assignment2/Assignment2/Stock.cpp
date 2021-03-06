#include <iostream>
#include <string>
#include "Stock.h"
#include <Windows.h>
using namespace std;

//mutator
void Stock::setSymbol(string sim) {	symbol = sim;}
void Stock::setPrice(double p) { price = p; }
void Stock::setShares(int s) { shares = s; }
void Stock::setOpening(double o) {oPrice = o;}
void Stock::setClosing(double c) { cPrice = c; }
void Stock::setHighPrice(double h) { hPrice = h; }
void Stock::setLowPrice(double l) { lPrice = l; }
void Stock::setPrevPrice(double pp) { pPrice = pp; }
void Stock::setPercent(double per) { percent = per; }
//accessor
string Stock::getSymbol() { return symbol; }
double Stock::getPrice() { return price; }
int Stock::getShares() { return shares; }
double Stock::getOpening() { return oPrice; }
double Stock::getClosing() { return cPrice; }
double Stock::getHighPrice() { return hPrice; }
double Stock::getLowPrice() { return lPrice; }
double Stock::getPrevPrice() { return pPrice; }
double Stock::getPercent() { return percent; }


void Stock::printStockInfo() {
	cout << symbol << oPrice << cPrice << hPrice << lPrice << pPrice << percent << shares << endl;
}

void Stock::CalGainLose() {
	percent = ((cPrice - pPrice) / pPrice) * 100;
}

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
		getline(fileIn, line, '\n'); //Volume
		s.shares = stoi(line);
		s.CalGainLose();
	}
	catch (const std::exception &exc)
	{
		cout << "FATAL" << endl;
		MessageBox(NULL, L"An unknown error occurred. Check Stock.txt \nThis program will be terminated", L"Error", MB_OK | MB_ICONERROR);
		exit(1);
	}
	return fileIn;
}