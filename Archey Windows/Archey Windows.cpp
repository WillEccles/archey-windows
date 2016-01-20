// Archey Windows.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>

// for info on getting computer information:
//	CPU: https://msdn.microsoft.com/en-us/library/hskdteyh%28v=vs.80%29.aspx
//	Everything else can be found from here: http://stackoverflow.com/questions/5658975/c-get-processor-id

using namespace std;

int main()
{
	HANDLE hConsole;
	int k = 0;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	for (k = 0; k <= 15; k++) {
		SetConsoleTextAttribute(hConsole, k);

		cout << k << " HERRO" << endl;
	}

	cin.get();

	return 0;
}