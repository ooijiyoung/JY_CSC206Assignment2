#pragma once
#include <string>
using namespace std;

//VERSION 3.0
/* 
More updated to add more new features for assignment 2!
*/

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
};

#endif // !_JIYOUNG_
