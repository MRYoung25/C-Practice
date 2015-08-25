#include <iostream>

using namespace std;

struct snack
{ 
	char brand[50] = "Mocha Munch";
	double weight = 2.3;
	int calorie = 350;
};

int main()
{
	snack CandyBar;
	cout << "The brand is: " << CandyBar.brand << endl;
	cout << "The weight is: " << CandyBar.weight << endl;
	cout << "The calorie is: " << CandyBar.calorie << endl;
	return 0;
};
