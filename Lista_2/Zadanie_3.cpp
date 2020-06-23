#include <iostream>
#include <vector>

using namespace std;

double operator* (vector <double> const& v, vector <double> const& w)
{
    double wynik = 0.0;
    for(unsigned i = 0; i < v.size() and i < w.size(); i++)
        wynik+=(v[i]*w[i]);
    return wynik;
}

ostream &operator << (ostream &F, vector <double> const&w)
{
    F << "(";
    if(!w.empty())
        F << w[0];
    for(unsigned i = 0; i < w.size(); i++)
        F << "," << w[i];
    F << ")";
    return F;
}

int main()
{
	vector <double> v = {17.5, 3, 12.8, 5.8, 45.1, 105.7};
	vector <double> w = {5,5, 22.14, 15.3, 4.1, 7.7, 11.6};
	cout << "v=" << v << endl;
	cout << "w=" << w << endl;
	cout << "Iloczyn skalarny v*w=" << (v*w) << endl;
}
