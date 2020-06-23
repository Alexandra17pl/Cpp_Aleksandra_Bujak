#include "stos2.h"

Stos2::Stos2(const Stos2& rhs)
	: _size(rhs._size)
{
	if (rhs.empty())
	{
		_pSzczyt = new Ogniwo(0, nullptr);
		return;
	}
	
	_pSzczyt = new Ogniwo(rhs._pSzczyt->_dane, nullptr);
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

Stos2& Stos2::operator=(Stos2 const& rhs)
{
	if (this == &rhs)
		return *this;
	delete[] _pSzczyt;
	
	if (rhs.empty())
	{
		_pSzczyt = new Ogniwo(0, nullptr);
	}
	else
	{
		_pSzczyt = new Ogniwo(rhs._pSzczyt->_dane, nullptr);
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
}
