#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	cout << "Enter your first name: ";
	char name1[20];
	cin.getline(name1, 20);
	cout << "Enter your last name: ";
	string name2;
	getline(cin, name2);
	cout << "Here's the information in a single string: "
	     << name1 << ", " << name2 << endl;
	return 0;
};
