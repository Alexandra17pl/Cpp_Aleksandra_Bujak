#include "zespolona.h"

int main()
{
	Zespolona z1(2, 5);
	Zespolona z2(7, 8);
	Zespolona z3;
	std::cin >> z3;
	
	std::cout << z1 << '\n';
	std::cout << z2 << '\n';
	std::cout << z3 << '\n';
	
	Zespolona z12 = z1 + z2;
	Zespolona z21 = z2 - z1;
	Zespolona z31 = z3 * z1;
	Zespolona z32 = z3 / z1;
	
	std::cout << z12 << '\n';
	std::cout << z21 << '\n';
	std::cout << z31 << '\n';
	std::cout << z32 << '\n';
}
