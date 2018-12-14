#include "ClassA.hpp"
#include <iostream>



ClassA::ClassA()
{
	A = 10;
	B = 20;
}


ClassA::~ClassA()
{
	A = 0;
	B = 0;
}

void ClassA::Draw()
{
	std::cout << A << std::endl;
	std::cout << B << std::endl;
}
