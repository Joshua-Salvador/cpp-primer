// population.cpp -- us population % in world population

#include <iostream>

int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);

	const char percent_symbol = 37;

	long world;
	long us;

	cout << "Enter the world's population:";
	cin >> world;
	cout << "Enter the population of the US:";
	cin >> us;

	double percent = (static_cast<float> (us) / static_cast<float> (world)) * 100;
	cout << "The population of the US is " << percent << percent_symbol << " of the world population" << endl;
        return 0;
}	
