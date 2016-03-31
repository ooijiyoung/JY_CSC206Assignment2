#include <iostream>
#include <string>
#include "JiYoung.h"
#include <Windows.h>
#include <fstream>
#include "Stock.h"
#include "StockListManager.h"
#include <iomanip>
using namespace std;


int main(void) {
	cout << fixed << showpoint << setprecision(2);
	JiYoung ojy;
	string UserOS = ojy.getOSVersion();
	StockListManager st;
	st.printHead();
	st.printTrail();
	//ShellExecute(NULL, L"open", L"path.to.exe", NULL, NULL, SW_SHOWDEFAULT);
	ojy.getch();
	return 0;
}