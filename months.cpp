// months.cpp -- Write a program that asks the user to enter his or her age.The program then should display the age in months

#include <iostream>

int main()
{
	using namespace std;

	int age;
	int month;

	cout << "Enter your age:";
	cin >> age;
	month = age * 12;
	cout << endl;
	cout << "Your age in months is " << month << endl;
	return 0;
}
