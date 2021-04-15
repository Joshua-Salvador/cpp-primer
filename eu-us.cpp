// eu-us.cpp -- euro style gas consumption to us style

#include <iostream>

int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);

	float eu_li;

	cout << "Enter how many liters per 100 kilometers:";
	cin >> eu_li;

	float liter_km = eu_li / 100;
	float mpg = 1 / (liter_km * (1 / 0.6214) * 0.264172);
	cout << mpg << " mpg" << endl;
	return 0;
}



