#include <iostream>

int main()
{
    double tab[10];
    double x;

    std::cout << &x << "\t" << &tab[-1] << "\n";
}
//Otrzymałam wynik: "0x7ffe7c971b68	0x7ffe7c971b68", dzieje się tak ponieważ komputer ma ograniczoną ilość pamięci i zmienne są zapisywane obok siebie. Jeżeli wyjdziemy poza zakres tab, to możemy nadpisać inną zmienną.
