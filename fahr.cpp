// fahr.cpp -- Converts celsius to fahrenheit

#include <iostream>

double fahrtocels(double);

int main()
{
	using namespace std;

	double cels;
	
	cout << "Please enter a Celsius value:";
	cin >> cels;
	cout << endl;
	double fahr = fahrtocels(cels);
	cout << cels << " degrees Celsius is " << fahr << " degrees Fahrenheit." << endl;
	return 0;
}

double fahrtocels(double cels)
{
	return 1.8 * cels + 32.0;
}
