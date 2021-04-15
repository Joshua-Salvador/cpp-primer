// latitude.cpp -- display latitude in decimals from degrees, minuts, and seconds

#include <iostream>

int main()
{
	using namespace std;

	const float conv_factor = 60;

	int degrees;
	int minutes;
	int seconds;

	cout << "Enter degrees:___\b\b";
	cin >> degrees;
	cout << "Enter minutes:___\b\b";
	cin >> minutes;
	cout << "Enter seconds:___\b\b";
	cin >> seconds;

	double degrees_min = static_cast<double> (minutes) / conv_factor;
	double degrees_sec = static_cast<double> (seconds) / (conv_factor * conv_factor);
	double lat = static_cast<double> (degrees) + degrees_min + degrees_sec;
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = ";
	cout << lat << " degrees" << endl;
	return 0;
}

