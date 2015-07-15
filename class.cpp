#include "class.h"
#include <iostream>

void Person::Print()
{
    std::cout << "Hello" << std::endl;
};

void Person::Setname()
{
    std::cout << "A New Name: " << std::endl;
};

int main()
{
    Person a;
    a.Print();
    a.Setname();
};
