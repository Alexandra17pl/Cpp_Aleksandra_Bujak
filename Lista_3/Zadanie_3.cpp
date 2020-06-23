#include <iostream>
#include <chrono>

using namespace std;

int main()
{
	unsigned N = 8700000;
    auto start = chrono::steady_clock::now();
    for (unsigned n = 1; n <= N; ++n)
    {
		int* p = new int[n];
		delete [] p;
	}
    auto end = chrono::steady_clock::now();
    chrono::duration<double> elapsed_seconds = end - start;
    cout << "Czas wykonania tworzenia i usuwania dynamicznej tablicy:  " << elapsed_seconds.count() << "s" << endl;
    
    auto start_d = chrono::steady_clock::now();
    for (long unsigned n = 1; n <= N; ++n)
    {
		n = n + n;
	}
    auto end_d = chrono::steady_clock::now();
    chrono::duration<double> elapsed_seconds_d = end_d - start_d;
    cout << "Czas wykonania dodawania:  " << elapsed_seconds_d.count() << "s" << endl;
}
