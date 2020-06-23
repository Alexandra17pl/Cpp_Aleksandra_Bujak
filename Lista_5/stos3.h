#ifndef Stos3_H
#define STOS3_H
#include <cassert>
#include <iostream>
#include <stddef.h>

struct Ogniwo
{
	Ogniwo(int n, Ogniwo* p)
		: _dane(n)
		, _p_nastepny(p)
		{
		}
	int _dane;
	Ogniwo* _p_nastepny;
	};

class Stos3
{
	public:
		Stos3();
		Stos3(Stos3 const&);
		~Stos3();
		void push(int i);
		void pop();
		int top() const;
		int& top();
		bool empty() const;
		size_t size() const;
		Stos3& operator=(Stos3 const&);
		friend std::ostream& operator<<(std::ostream& os, const Stos3& obj);
	private:
	Ogniwo* _pSzczyt;
	size_t _size;
};

inline Stos3::Stos3()
	: _pSzczyt(0)
	, _size(0)
	{
	}
	
inline bool Stos3::empty() const { return _pSzczyt == 0; }

inline void Stos3::push(int i)
{
	_pSzczyt = new Ogniwo(i, _pSzczyt);
	_size++;
}

inline void Stos3::pop()
{
	assert(!empty());
	Ogniwo* temp = _pSzczyt;
	_pSzczyt = _pSzczyt->_p_nastepny;
	delete temp;
	_size--;
}

inline Stos3::~Stos3()
{
	while (!this->empty())
	this->pop();
}

inline int Stos3::top() const
{
	assert(!empty());
	return _pSzczyt->_dane;
}

inline int& Stos3::top()
{
	assert(!empty());
	return _pSzczyt->_dane;
}

inline size_t Stos3::size() const
{
	return _size;
}

#endif // Stos3_H
