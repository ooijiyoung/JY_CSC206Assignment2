#include <iostream>
#include <string>
#include "Stock.h"
using namespace std;
//IMPOEKOEPOTAJIPOEJIPO ijofijeio jioGirbnjoeg

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
//void Stock::someFeatures(){ code }

void Stock::setStockInfo(){

}

void Stock::printStockInfo() {

}
//TODO constructor - COMING SOON