#ifndef RAZ_H
#define RAZ_H
#include <iostream>
#include "dwa.h"
#include "trzy.h"
#include "cztery.h"

class Raz : public Dwa
{
	public:
		Raz()
		{
			Trzy trzy;
			std::cout << "destrukcji ";
		}
		~Raz()
		{
			std::cout << "jest ";
		}
	private:
		Cztery _cztery;
};
#endif
