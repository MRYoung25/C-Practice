#include <iostream>

using namespace std;

double Transform(double);

int main()
{
	cout << "Enter the number of light years: ";
	double years;
	cin >> years;
	double astronomical = Transform(years);
	cout << years << " light years = " << astronomical << " astronomical unite" << endl;
	return 0;
};

double Transform(double years)
{
	double astronomical = years * 63240;
	return astronomical;
};
