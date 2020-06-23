#include <iostream>
#include <cmath>
#include <vector>
#include <ctime>

using namespace std;

int fibo1(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	else
		return fibo1(n-1) + fibo1(n-2);
}

int fibo2(int n)
{
	return round(1.0/sqrt(5.0) * ( pow( (1.0+sqrt(5.0))/2.0 , (double)(n) ) - pow( (1.0-sqrt(5.0))/2.0 , (double)(n) ) ));
}

int fibo3(int n)
{
	static vector<int> v={1,1};
	if (n <= v.size())
		return v[n-1];
	for (int i = v.size()-1 ; i < n; ++i)
	{
		v.push_back(v[i]+v[i-1]);
	}
    return v[n-1];
}

int main()
{
	double time;
    clock_t start,stop;
    cout << "Podpunkt a)" << endl;
    start=clock();
    for(int i=1;i<=48;i++)
    {
		cout << fibo1(i) << ",";
	}
    stop=clock();
    time=(stop-start)/(double)(CLOCKS_PER_SEC);
    cout<<"\nCzas wykonania: "<< time << " ms" << endl;
    
    clock_t start_2,stop_2;
    cout << "Podpunkt b)" << endl;
    start_2=clock();
    for(int i=1;i<=48;i++)
    {
		cout << fibo2(i) << ",";
	}
    stop_2=clock();
    time=(stop_2-start_2)/(double)(CLOCKS_PER_SEC);
    cout << "\nCzas wykonania: " << time << " ms" << endl;
    
    clock_t start_3,stop_3;
    cout << "Podpunkt c)" << endl;
    start_3=clock();
    for(int i = 1; i <= 48; i++)
    {
		cout << fibo3(i) << ", ";
	}
    stop_3=clock();
    time=(stop_3-start_3)/(double)(CLOCKS_PER_SEC);
    cout << "\nCzas wykonania: " << time << " ms" << endl;
}
