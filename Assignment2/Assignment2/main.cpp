#include <iostream>
#include <string>
#include "JiYoung.h"
#include <Windows.h>
#include <fstream>
#include "Stock.h"
#include "StockListManager.h"
#include <iomanip>
using namespace std;

JiYoung ojy;
StockListManager st;
void printMenu();

int main(void) {
	cout << fixed << showpoint << setprecision(2);
	string UserOS = ojy.getOSVersion();
	//ShellExecute(NULL, L"open", L"c:\\Windows\\System32\\GWX\\GWX.exe", NULL, NULL, SW_SHOWDEFAULT);
	for (;;) {
		printMenu();
		
	}
	ojy.getch();
	return 0;
}

void printMenu() {
	ojy.clrscr();
	cout << "Stock Listing Management" << endl;
	ojy.printRpt("-", 30);
	cout << endl << "1. Print all stocks" << endl;
	cout << "2. Sort and Print stocks" << endl;
	cout << "3. Exit Program" << endl << "Enter Selection: ";
	int selection;//The Selection of the menu 
	cin >> selection; //Input Validation

	ojy.clrBuffer();

	switch (selection)
	{
	case 1:
		ojy.clrscr();
		st.printHead();
		st.printStock();
		st.printTrail();
		ojy.getch();
		break;
	case 2:
		st.sort();
		break;
	case 3:
		//select exit program
		cout << "Press any key to exit" << endl;
		ojy.getch();
		exit(0);
		break;
	default:
		//print out popup Error Message 
		MessageBox(NULL, L"Invalid Entry\nPlease Try Again!", L"Error", MB_OK | MB_ICONERROR);
		break;
	}
}