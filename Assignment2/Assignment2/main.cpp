#include <iostream>
#include <string>
#include "JiYoung.h"
#include <Windows.h>
#include <fstream>
#include "Stock.h"
#include "StockList.h"

using namespace std;


int main(void) {
	JiYoung ojy;
	string UserOS = ojy.getOSVersion();

	ojy.getch();
	return 0;
}