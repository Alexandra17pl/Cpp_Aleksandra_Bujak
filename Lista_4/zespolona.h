#ifndef ZESPOLONA_H
#define ZESPOLONA_H
#include <iostream>

class Zespolona
{
	private:
		double rzeczywista;
		double urojona;
	public:
		Zespolona(double rzeczywista, double urojona = 0)
			: rzeczywista(rzeczywista)
			, urojona(urojona)
    {
    }
    Zespolona()
        : Zespolona(0)
    {
    }

    double get_rzeczywista() const { return rzeczywista; }
    double get_urojona() const { return urojona; }

    Zespolona operator+(const Zespolona& Z);
    Zespolona operator-(const Zespolona& Z);
    Zespolona operator/(const Zespolona& Z);
    Zespolona operator*(const Zespolona& Z);
    friend std::ostream& operator<<(std::ostream& out, const Zespolona& Z);
    friend std::istream& operator>>(std::istream& in, Zespolona& Z);
};
#endif // ZESPOLONA_H
