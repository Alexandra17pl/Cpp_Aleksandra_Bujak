#include <iostream>

class Samochod
{
	public:
		Samochod (int n) : kola(n), sruby(4 * kola)
		{
			std::cout << "Samochód z " << kola << " kołami i " << sruby << " śrubami \n";
		}
	private: //nalezalo zamienic kolejnoscia kola i sruby aby otrzymac poprawny wynik
		int kola;
		int sruby;
};

int main()
{
    Samochod s4(4);
    Samochod s12(12);
}
