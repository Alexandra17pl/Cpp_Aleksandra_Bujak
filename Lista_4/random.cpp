#include "random.h"
#include <cassert>
#include <climits>
#include <ctime>
#include <iostream>

Random::Random(int f1)
{
	assert(f1 > 0 && f1 < INT_MAX);
	this->_fn = f1;
}

double Random::operator()()
{
	long long temp = _fn;
	temp = (16807 * temp) % (INT_MAX);
	_fn = temp;
	return double(_fn) / double(INT_MAX - 1);
}
