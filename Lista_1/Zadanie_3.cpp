#include <iostream>
#include <cmath>
#include <math.h>

int main()
{
    int n=30;
    double t0=1/(sqrt(3));
    double P;
    double ta;
    double t1;
    double tb;
    double t2;
    std::cout << "Wartosci dla metody (a):\n";
    for(int i=0; i<=n; i++)
    {
		if(i==0)
		{
			P=6.0*t0;
			cout << "\nDla i=0 otrzymujemy: " << P << endl;
			ta=t0;
		}
		else
		{
			t1=(sqrt((ta*ta)+1)-1)/(ta);
			P=6.0*pow(2.0,i)*t1;
			cout << "Dla i=" << i << " otrzymujemy: " << P << endl;
			ta=t1;
		}
	}
    cout << "\nWartosci dla metody (b):\n";
    for(int i=0; i<=n; i++)
    {
		if(i==0)
        {
			P=6.0*t0;
			cout << "\nDla i=0 otrzymujemy: " << P << "\n";
			tb=t0;
		}
        else
        {
			t2=tb/(sqrt((tb*tb)+1)+1);
			P=6.0*pow(2.0,i)*t1;
			cout << "Dla i=" << i << " otrzymujemy: " << P << "\n";
			tb=t2;
		}
	}
    return 0;
}
