// code taken from chapter 3.9 (learncpp.com)
#include <iostream>

void a()
{
	std::cout << "a() called\n";
}

void b()
{
	std::cout << "b() called\n";
	a();
}

int main()
{
	a();
	b();

	return 0;
}
