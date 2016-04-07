#pragma once
#include <string>
using namespace std;

#ifndef _JIYOUNG_
#define _JIYOUNG_
#undef max
//utility class
class JiYoung {
	public:
		int isValidInt();
		double isValidDouble();
		void clrscr();
		void getch();
		void clrBuffer();
		void setw(string,int);
		void doNothing();
		string doubleToStrPrecis(double, int);
		int largerThanZeroInt();
		double largerThanZeroDouble();
		string getOSVersion();
		void printRpt(string,int);
		void about();
};

#endif // !_JIYOUNG_
