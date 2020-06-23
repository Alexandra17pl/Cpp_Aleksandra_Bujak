#ifndef stos4_H
#define stos4_H
#include <stddef.h>
#include <cassert>
#include <iostream>

struct Ogniwo
{
	Ogniwo(int n, Ogniwo* p): _dane(n), _p_nastepny(p)
	{
	}
	int _dane;
	Ogniwo* _p_nastepny;
};

class Stos4
{
	public:
		Stos4();
		Stos4(Stos4 const&);
		~Stos4();
		void push(int i);
		void pop();
		int top() const;
		int& top();
		bool empty() const;
		void reverse();
		size_t size() const;
		Stos4& operator=(Stos4 const&);
		friend std::ostream& operator <<(std::ostream& os, const Stos4& obj);
	private:
		Ogniwo* _pSzczyt;
		size_t _size;
};

inline Stos4::Stos4(): _pSzczyt(0), _size(0)
{
}

inline bool Stos4::empty() const {return _pSzczyt == 0;}

inline void Stos4::push(int i)
{
	_pSzczyt = new Ogniwo(i, _pSzczyt);
	_size++;
}

inline void Stos4::pop()
{
	assert(!empty());
	Ogniwo* temp = _pSzczyt;
	_pSzczyt = _pSzczyt ->_p_nastepny;
	delete temp;
	_size--;
}

inline Stos4::~Stos4()
{
	while (!this->empty())
	this->pop();
}

inline int Stos4::top() const
{
	assert(!empty());
	return _pSzczyt->_dane;
}

inline int& Stos4::top()
{
	assert(!empty());
	return _pSzczyt->_dane;
}

inline size_t Stos4::size() const {return _size;}
#endif // stos4_H
