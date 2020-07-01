#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
	Complex z1;
	Complex z2;
	cin >> z1;
	cin >> z2;
	cout << "Liczba zespolona Z1: 564" << z1 << "\n";
	cout << "Liczba zespolona Z2: " << z2 << "\n";
	cout << z1 + z2 << "\n";
	cout << z1 - z2 << "\n";
	cout << z1 * z2 << "\n";
	cout << z1 / z2 << "\n";
	return 0;
}
