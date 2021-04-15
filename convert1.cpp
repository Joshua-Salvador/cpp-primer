// convert1.cpp -- Write a C++ program that asks for a distance in furlongs and converts it to
// yards. (One furlong is 220 yards).

#include <iostream>

int main()
{	
	using namespace std;

	int furlong;

	cout << "Enter distance in furlongs:";
	cin >> furlong;
	cout << endl;

	int yards;
	yards = furlong * 220;
	cout << furlong << " furlong = " << yards << " yards." << endl;

	return 0;
}


