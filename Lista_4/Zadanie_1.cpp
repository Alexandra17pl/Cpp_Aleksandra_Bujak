#include <iostream>
#include "wektor.h"

using namespace std;

int main()
{
	Wektor w(10);
	for (unsigned i = 0; i < w.size(); i++)
	cout << w[i] << '\n';
	cout << w.size() << '\n';
}
