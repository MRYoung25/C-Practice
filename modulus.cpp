#include <iostream>

using namespace std;

const int Lbs_per_stn = 14;

int main()
{
	cout << "Enter your weight in pounds: ";
	int lbs;
	cin >> lbs;
	cout << lbs << " pounds are " << lbs / Lbs_per_stn << " stone, "
	     << lbs % Lbs_per_stn << " pound(s)." << endl;
	return 0;
};
