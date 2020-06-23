#include "stos3.h"
#include <iostream>

Stos3::Stos3(const Stos3& rhs)
	: _size(rhs._size)
{
	_pSzczyt = new Ogniwo(rhs._pSzczyt->_dane, 0);
	Ogniwo* poczatek_nasz = _pSzczyt;
	Ogniwo* temp = rhs._pSzczyt;
	while (temp->_p_nastepny != nullptr)
	{
		temp = temp->_p_nastepny;
		_pSzczyt->_p_nastepny = new Ogniwo(temp->_dane, nullptr);
		_pSzczyt = _pSzczyt->_p_nastepny;
	}
	_pSzczyt = poczatek_nasz;
}

Stos3& Stos3::operator=(Stos3 const& rhs)
{
	if (this == &rhs)
		return *this;
	delete[] this->_pSzczyt;
	_pSzczyt = new Ogniwo(rhs._pSzczyt->_dane, 0);
	Ogniwo* poczatek_nasz = _pSzczyt;
	Ogniwo* temp = rhs._pSzczyt;
	while (temp->_p_nastepny != nullptr)
	{
		temp = temp->_p_nastepny;
		_pSzczyt->_p_nastepny = new Ogniwo(temp->_dane, nullptr);
		_pSzczyt = _pSzczyt->_p_nastepny;
	}
	_pSzczyt = poczatek_nasz;
}

std::ostream& operator<<(std::ostream& os, const Stos3& obj)
{
	Ogniwo* temp = obj._pSzczyt;
	while (temp != nullptr)
	{
		os << temp->_dane << ", ";
		temp = temp->_p_nastepny;
	}
    return os;
}
