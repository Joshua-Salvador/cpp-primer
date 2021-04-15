// height.cpp -- get height in inches to height in feet inches

#include <iostream>

int main()
{
	using namespace std;
	const int conv_factor = 12;

	int inches;

	cout << "Enter your height in inches:___\b\b\b";
	cin >> inches;

	int feet = inches / conv_factor;
	int remaining_inches = inches % conv_factor;

	cout << "You are " << feet << " feet, and " << remaining_inches;
	cout << " inches tall" << endl;
	return 0;
}
