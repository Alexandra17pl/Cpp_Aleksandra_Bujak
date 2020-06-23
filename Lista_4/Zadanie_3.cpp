#include "random.h"
#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	Random r;
	for (int i = 0; i < 10; i++)
		cout << r() << "\n";
}
