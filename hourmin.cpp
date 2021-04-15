// hourmin.cpp -- Get hours and minutes to display hh:mm date format

#include <iostream>

int main()
{
	using namespace std;
	int hours;
	int minutes;

	cout << "Input an hour value:";
	cin >> hours;
	cout << endl;

	cout << "Input a minute value:";
	cin >> minutes;
	cout << endl;

	cout << "Time: " << hours << ":" << minutes << endl;
	return 0;
}

