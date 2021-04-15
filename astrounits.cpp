// astrounits.cpp -- convert lightyears to astronomical units

#include <iostream>

double ly_to_astro(double);

int main()
{
	using namespace std;
	double ly;
	
	cout << "Enter the number of light years:";
	cin >> ly;
	cout << endl;

	double astro = ly_to_astro(ly);

	cout << ly << " light years = " << astro << " astronomical units." << endl;
	return 0;
}

double ly_to_astro(double ly)
{
	return ly * 63240;
}
