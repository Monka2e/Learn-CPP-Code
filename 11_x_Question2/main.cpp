/*
> Step #1

Write a function template named add() that allows the users to add 2 values of the same type. The following program should run:

#include <iostream>

// write your add function template here

int main()
{
	std::cout << add(2, 3) << '\n';
	std::cout << add(1.2, 3.4) << '\n';

	return 0;
}


> Step #2

Write a function template named mult() that allows the user to multiply one value of any type (first parameter)
and an integer (second parameter). The function should return the same type as the first parameter.
The following program should run:

#include <iostream>

// write your mult function template here

int main()
{
	std::cout << mult(2, 3) << '\n';
	std::cout << mult(1.2, 3) << '\n';

	return 0;
}
and produce the following output:

6
3.6
*/

#include <iostream>

template <typename T>
T add(T x, T y) {
    return x + y;
}

template <typename T>
T mult(T x, int y) {
    return x * y;
}

int main()
{
	std::cout << add(2, 3) << '\n';
	std::cout << add(1.2, 3.4) << '\n';

    std::cout << mult(2, 3) << '\n';
	std::cout << mult(1.2, 3) << '\n';

	return 0;
}
