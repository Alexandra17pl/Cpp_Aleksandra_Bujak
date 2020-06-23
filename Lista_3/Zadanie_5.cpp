#include <iostream>
#include <cstring>

int main()
{
	char haslo[8];
	strcpy(haslo, "Ta.jnE!");
	for ( ; ;)
	{
		std:: cout << "Podaj haslo: ";
		char tmp[8];
		std:: cin >> tmp;
		if (strcmp(tmp, haslo) == 0)
			break;
		std:: cout << "Przykro mi, haslo jest niepoprawne!\n";
	}
	std:: cout << "Witaj w systemie!\n";
}
