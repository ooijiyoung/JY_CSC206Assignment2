#include <iostream>
#include <string>
#include "JiYoung.h"
#include <Windows.h>
#include <fstream>
#include "Stock.h"
#include "StockListManager.h"

using namespace std;


int main(void) {
	JiYoung ojy;
	string UserOS = ojy.getOSVersion();
	StockListManager st;
	st.printHead();
	//ShellExecute(NULL, L"open", L"path.to.exe", NULL, NULL, SW_SHOWDEFAULT);
	ojy.getch();
	return 0;
}