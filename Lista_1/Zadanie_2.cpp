#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int n=1000000;
	double A=0;
	double B=1;
	double C=0;
	double factor=1;
	for(int j=1; j<=n; j++)
	{
		double x=factor/((2*j)-1);
		A+=x;
		factor=-factor;
	}
	
	for(int i=1; i<=n; i++)
	{
		double l=4.0*i*i;
		double m=l-1;
		double y=l/m;
		B*=y;
	}
	
	for(int k=1; k<=n; k++)
	{
		double z=1/(((2.0*k)-1)*((2.0*k)-1));
		C+=z;
	}
	A*=4;
	B*=2;
	C*=8;
	C=sqrt(C);
	cout << "Liczba Pi=" << M_PI << endl;
	cout << "A=" << A << endl;
	cout << "B=" << B << endl;
	cout << "C=" << C << endl;
    return 0;
}
