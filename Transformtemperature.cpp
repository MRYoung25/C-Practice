#include <iostream>

using namespace std;

double Transforms(double);

int main()
{
	cout << "Please enter a Celsius value: ";
	double Celsius;
	cin >> Celsius;
	double Fahrenheit = Transforms(Celsius);
	cout << Celsius << " degress Celsius is " << Fahrenheit << " degrees Fahrenheit." << endl;
	return 0;
};

double Transforms(double Celsius)
{
	double Fahrenheit = 1.8 * Celsius + 32;
	return Fahrenheit;
};
