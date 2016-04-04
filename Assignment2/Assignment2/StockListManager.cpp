#include "Stock.h"
#include "StockListManager.h"
#include <iostream>
#include "JiYoung.h"
void StockListManager::printReportBYGain() {
	
}
void StockListManager::printReportBySymb() {

}

void StockListManager::sort(Stock *s, int length) {
	int j, temp;
	Stock temp = s[2];
	for (int i = 0; i < length; i++) {
		j = i;
		while (j > 0 && s[j] < s[j - 1]) {
			temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
			j--;
		}
	}
	
}

StockListManager::StockListManager(){
}

StockListManager::~StockListManager(){
}
