#include <iostream>
#include <vector>

using namespace std;

void zeruj(vector<double> &w)
{
	for(int i = 0; i < w.size(); i++)
	{
		w[i] = 0.0;
	}
}

ostream &operator<< (ostream &F,vector<double> const &w)
{
    F << "(";
    if(!w.empty())
        F << w[0];
    for(unsigned i=0;i<w.size();i++)
        F << ", " << w[i];
    F << ")";
    return F;
}

int main()
{
	vector<double> v={17.5, 3, 12.8, 5.8, 45.1, 105.7};
	cout << "v=" << v << endl;
	zeruj(v);
	cout << "v=" << v << endl;
}
