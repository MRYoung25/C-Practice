#include <iostream>

using namespace std;

int month(int);

int main()
{
	cout << "Enter your age: ";
	int age;
	cin >> age;
	int n = month(age);
	cout << "It is " << n << " months" << endl;
	return 0;
};

int month(int m)
{
	return m * 12;
};
