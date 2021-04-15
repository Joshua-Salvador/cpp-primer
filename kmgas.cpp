// kmgas.cpp -- get kilometers driven and liters in gasoline -> km/l

#include <iostream>

int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);

	int kilometers;
	int liters;

	cout << "Enter number of kilometers driven:";
	cin >> kilometers;
	cout << "Enter number of liters of gasoline used:";
	cin >> liters;

	float km_liter = kilometers / liters;
	cout << km_liter << "km/l" << endl;
	return 0;
}
