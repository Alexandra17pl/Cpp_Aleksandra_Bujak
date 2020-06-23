#include <iostream>

using namespace std;

int silnia(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*silnia(n-1);
	}
}

int main()
{
	const int N=40;
	for(int i=0; i<=N; i++)
	{
		cout << "Silnia z " << i << ": " << silnia(i) << endl;
	}
	
	return 0;
}
// błąd który pojawia się od wyniku 13 elementu związany jest z typem int, który nie obsługuje tak duzych liczb. Aby dostać wynik trzeba użyć zmiennej innego typu, np long (maksymalnie obliczymy 20!)
