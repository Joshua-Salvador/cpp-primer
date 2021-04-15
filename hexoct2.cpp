// hexoct2.cpp -- display values in hex and octal

#include <iostream>

int main()
{
	using namespace std;
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "Mousier cuts a striking figure!" << endl;
	cout << "chest = " << chest << " (decimal for 42)" << endl;
	cout << hex;	// manipulator for changing number base
	cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
	cout << oct;	// manipulator for change number base
	cout << "inseam = " << inseam << " (octal for 42)" << endl;
	return 0;
}
