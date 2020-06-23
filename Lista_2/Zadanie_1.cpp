#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int min(vector<int> const &w)
{
	if (w.size() == 0)
		return INT_MIN;
	
	int temp = w[0];
	for(unsigned i = 0 ;i < w.size() ;i++)
	{
		if (temp>w[i])
		temp = w[i];
	}
	return temp;
}

int main()
{
	vector<int> v={17, 35, 56, 25, -7, 145, 15, 5, 8};
	cout << "Najmniejsza wartość wektora to: " << min(v) << endl;
}
