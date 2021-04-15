// seconds.cpp -- get number of seconds to days, hours, minutes, seconds

#include <iostream>

int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);

	const double hours_day = 24.0;
	const double minutes_hour = 60.0;
	const double seconds_minute = 60.0;

	long long seconds;

	cout << "Enter the number of seconds:________\b\b\b\b\b\b\b";
	cin >> seconds;

	long double d_days = seconds / minutes_hour / seconds_minute / hours_day;
	int i_days = static_cast<int> (d_days);
	long double d_hours = (d_days - i_days) * hours_day;
	int i_hours = static_cast<int> (d_hours);
	long double d_minutes = (d_hours - i_hours) * minutes_hour;
	int i_minutes = static_cast<int> (d_minutes);
	long double d_seconds = (d_minutes - i_minutes) * seconds_minute;
	int i_seconds = static_cast<int> (d_seconds);
	cout << seconds << " seconds = " << i_days << " days, " << i_hours << " hours, ";
	cout << i_minutes << " minutes, " << i_seconds << " seconds" << endl;	
	return 0;
}
