#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	cout << "Enter your first name: ";
	string name1;
	getline(cin, name1);
	cout << "Enter your last name: ";
	string name2;
	getline(cin, name2);
	cout << "Here's the information in a single string: "
	     << name1 << ", " << name2 << endl;
	return 0;
};
