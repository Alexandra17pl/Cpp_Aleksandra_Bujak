#include <iostream>

class X
{
	friend std::ostream& operator<<(std::ostream& F, X const&);
	private:
		int _x;
	public:
		X(int arg)
		: _x(arg)
		{
		}
};

std::ostream& operator<<(std::ostream& F, X const& arg)
{
	return F << arg._x;
}

int main()
{
	X zmienna(100);
	std::cout << zmienna << '\n';
}
