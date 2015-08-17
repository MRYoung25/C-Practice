#include <iostream>

const double MINS_PER_DEG = 60.0;
const double SECS_PER_MIN = 60.0;

using namespace std;

int main()
{
	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degrees: ";
	double degrees;
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	double minutes;
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	double seconds;
	cin >> seconds;
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = ";
	double latitude = degrees + (minutes + seconds / SECS_PER_MIN) / MINS_PER_DEG;
	cout << latitude << " degrees" << endl;
	return 0;
};
