#include <iostream>

using namespace std;

int call1();
int call2();

int main()
{
 	cout << call1() << endl;
	cout << call1() << endl;
	cout << call2() << endl;
	cout << call2() << endl;
	return 0;
};

int call1()
{
	cout << "Three blind mice.";
	return 0;
};

int call2()
{
	cout << "See how they run.";
	return 0;
};
