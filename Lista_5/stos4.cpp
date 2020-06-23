#include "stos4.h"
#include <iostream>

Stos4::Stos4(const Stos4 &rhs): _size(rhs._size)
{
	_pSzczyt = new Ogniwo(rhs._pSzczyt->_dane,0);
	Ogniwo* poczatek_nasz = _pSzczyt;
	Ogniwo* temp = rhs._pSzczyt;
	while(temp->_p_nastepny != nullptr)
	{
		temp = temp->_p_nastepny;
		_pSzczyt->_p_nastepny = new Ogniwo(temp->_dane,nullptr);
		_pSzczyt = _pSzczyt->_p_nastepny;
	}
	_pSzczyt = poczatek_nasz;
}

Stos4& Stos4::operator=(Stos4 const&rhs)
{
	if(this == &rhs)
		return *this;
	delete [] this->_pSzczyt;
	_pSzczyt = new Ogniwo(rhs._pSzczyt->_dane,0);
	Ogniwo* poczatek_nasz = _pSzczyt;
	Ogniwo* temp = rhs._pSzczyt;
	while(temp->_p_nastepny != nullptr)
	{
		temp = temp->_p_nastepny;
		_pSzczyt->_p_nastepny = new Ogniwo(temp->_dane,nullptr);
		_pSzczyt = _pSzczyt->_p_nastepny;
	}
	_pSzczyt = poczatek_nasz;
}

std::ostream& operator <<(std::ostream& os, const Stos4& obj)
{
	Ogniwo* temp = obj._pSzczyt;
	while(temp != nullptr)
    {
		os << temp->_dane << ", ";
		temp = temp->_p_nastepny;
	}
	return os;
}

void Stos4::reverse()
{
	Ogniwo* now = this->_pSzczyt;
	Ogniwo* prev = nullptr;
	Ogniwo* next = now;
	while(next)
    {
		next = now->_p_nastepny;
		now->_p_nastepny = prev;
		prev = now;
		now = next;
    }
    this->_pSzczyt = prev;
}
