#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	cout << "what is your first name? ";
	const int First_Size = 20;
	char Fname[First_Size];
	cin.getline(Fname, First_Size);
	cout << "What is your last name? ";
	const int Last_Size = 30;
	char Lname[Last_Size];
	cin.getline(Lname, Last_Size);
	cout << "What letter grade dou you deserve? ";
	char grade;
	cin >> grade;
	cout << "what is your age? ";
	int age;
	cin >> age;
	cout << "Name: " << Fname << ", " << Lname << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age << endl;
	return 0;
};
