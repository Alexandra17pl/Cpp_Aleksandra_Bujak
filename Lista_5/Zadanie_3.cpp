#include "stos3.h"
#include <iostream>

int main()
{
	Stos3 test1;
	test1.push(1);
	test1.push(2);
	test1.push(3);
	test1.push(4);
	
	std::cout << test1 << '\n';
}
