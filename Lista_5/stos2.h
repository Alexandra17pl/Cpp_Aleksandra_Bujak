#ifndef Stos2_H
#define Stos2_H
#include <cassert>
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

class Stos2
{
	public:
		Stos2();
		Stos2(Stos2 const&);
		~Stos2();
		
		void push(int i);
		void pop();
		int top() const;
		int& top();
		bool empty() const;
		size_t size() const;
		Stos2& operator=(Stos2 const&);
	private:
		Ogniwo* _pSzczyt;
		size_t _size;
	};
	
inline Stos2::Stos2()
	: _pSzczyt(0)
	, _size(0)
	{
	}
	
inline bool Stos2::empty() const { return _pSzczyt == 0; }

inline void Stos2::push(int i)
{
	_pSzczyt = new Ogniwo(i, _pSzczyt);
	_size++;
}

inline void Stos2::pop()
{
	assert(!empty());
	Ogniwo* temp = _pSzczyt;
	_pSzczyt = _pSzczyt->_p_nastepny;
	delete temp;
	_size--;
}

inline Stos2::~Stos2()
{
	while (!this->empty())
	this->pop();
}

inline int Stos2::top() const
{
	assert(!empty());
	return _pSzczyt->_dane;
}

inline int& Stos2::top()
{
	assert(!empty());
	return _pSzczyt->_dane;
}

inline size_t Stos2::size() const { return _size; }
#endif // Stos2_H
