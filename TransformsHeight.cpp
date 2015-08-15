#include <iostream>

using namespace std;

const double feet = 12;

int main()
{
	cout << "Enter you height:________\b\b\b\b\b\b\b\b";
	double inch;
	cin >> inch;
	cout << "Your height is " << inch * feet << " feet(s) ";
	cout << inch << " inch(es)." << endl;
	return 0;
};
