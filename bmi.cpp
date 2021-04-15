// bmi.cpp -- get height in feet and inches, and weight in pounds, find bmi

#include <iostream>

int main()
{
	using namespace std;

	const int conv_in = 12;
	const double conv_m = 0.0254;
	const float conv_kg = 2.2;

	int h_feet;
	int h_inches;
	int w_pounds;

	cout << "Enter information regarding your height, feet and inches are in separate fields:";	   cout << endl;
	cout << "\tFeet:___\b\b";
	cin >> h_feet;
	cout << "\tInches:___\b\b";
	cin >> h_inches;
	cout << "Enter your weight in pounds:___\b\b";
	cin >> w_pounds;

	int h_in = h_feet * conv_in + h_inches;
	double h_m = h_in * conv_m;
	double w_kg = w_pounds / conv_kg;
	double bmi = w_kg / (h_m * h_m);

	cout << "Your bmi is: " << bmi << endl;
	return 0;
}
