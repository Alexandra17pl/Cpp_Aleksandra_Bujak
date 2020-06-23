#include "zespolona.h"

Zespolona Zespolona::operator+(const Zespolona& Z)
{
	double new_rzeczywista = rzeczywista + Z.get_rzeczywista();
	double new_urojona = urojona + Z.get_urojona();
	return Zespolona(new_rzeczywista, new_urojona);
}

Zespolona Zespolona::operator-(const Zespolona& Z)
{
    double new_rzeczywista = rzeczywista - Z.get_rzeczywista();
    double new_urojona = urojona - Z.get_urojona();

    return Zespolona(new_rzeczywista, new_urojona);
}

Zespolona Zespolona::operator/(const Zespolona& Z)
{
    double new_rzeczywista = (rzeczywista * Z.get_rzeczywista() + urojona * Z.get_urojona()) / (Z.get_rzeczywista() * Z.get_rzeczywista() + Z.get_urojona() * Z.get_urojona());
    double new_urojona = (urojona * Z.get_rzeczywista() + rzeczywista * Z.get_urojona()) / (Z.get_rzeczywista() * Z.get_rzeczywista() + Z.get_urojona() * Z.get_urojona());

    return Zespolona(new_rzeczywista, new_urojona);
}

Zespolona Zespolona::operator*(const Zespolona& Z)
{
    double new_rzeczywista = rzeczywista * Z.get_rzeczywista() - urojona * Z.get_urojona();
    double new_urojona = rzeczywista * Z.get_urojona() - Z.get_rzeczywista() * urojona;

    return Zespolona(new_rzeczywista, new_urojona);
}
std::ostream& operator << (std::ostream& out, const Zespolona& Z)
{
    out << "zespolona: " << Z.get_rzeczywista() << " + " << Z.get_urojona() << "i \n";
    return out;
}

std::istream& operator >> (std::istream& in, Zespolona& Z)
{
    in >> Z.rzeczywista >> Z.urojona;
    return in;
}
