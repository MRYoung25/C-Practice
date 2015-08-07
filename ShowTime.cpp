#include <iostream>

using namespace std;

void ShowTime(int);

int main()
{
	cout << "Enter the number of hours: ";
	int hours;
	cin >> hours;
	cout << "Enter the number of minutes: ";
	int minutes;
	cin >> minutes;
	cout << "Time: ";
	ShowTime(hours);
	cout << ":";
	ShowTime(minutes);
	cout << endl;
	return 0;
};

void ShowTime(int n)
{
	cout << n;
};
