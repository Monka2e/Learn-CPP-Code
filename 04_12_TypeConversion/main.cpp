#include <iostream>

char getCharFromInt(int x) {
	return static_cast<char>(x);
}

int main()
{
	/* 72 = 'H'
	 * 105 = 'i'
	 * 33 = '!'
	 */
	std::cout << getCharFromInt(72) << getCharFromInt(105) << getCharFromInt(33) << '\n';

    return 0;
}
