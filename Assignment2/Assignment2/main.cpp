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
void chckWinVer(); 

int main(void) {
	cout << fixed << showpoint << setprecision(2);
	chckWinVer();
	for (;;) {
		printMenu();
		
	}
	ojy.getch();
	return 0;
}

//print menu and the path after the selection
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


void chckWinVer() {
	string UserOS = ojy.getOSVersion();
	if ( UserOS != "Windows 10") {
		MessageBox(NULL, L"It seems you're runing an older version on Windows.\nUpgrade to Windows 10 today! Press OK to learn more about Windows 10", L"Warning", MB_OK | MB_ICONEXCLAMATION);
		ShellExecute(NULL, L"open", L"https://www.microsoft.com/en-us/windows/windows-10-upgrade", NULL, NULL, SW_SHOWDEFAULT);
	}
	
}