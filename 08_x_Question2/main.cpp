/*
A prime number is a natural number greater than 1 that is evenly divisible (with no remainder) only by 1 and itself.
Complete the following program by writing the isPrime() function using a for-loop. When successful, the program will print “Success!”.

Extra credit:

The for-loop in the above solution is suboptimal for two reasons:

It checks even numbers. We know these aren’t prime (except for 2).
It checks all numbers through x to see if they are a divisor.A non-prime number (a composite number)
must have at least one divisor less than or equal to its square root.
std::sqrt(x) (in the <cmath> header) returns the square root of x.
Update the above solution to implement both of these optimizations.
*/

#include <cassert>
#include <cmath>
#include <iostream>

bool isPrime(int x)
{
    if (x <= 1 || (x != 2 && x % 2 == 0)) {
        return false;
    }
    int squareRoot {static_cast<int>(std::sqrt(x))};
    for (int i {squareRoot}; i > 2; i -= 2) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    assert(!isPrime(0));
    assert(!isPrime(1));
    assert(isPrime(2));
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(isPrime(13417));

    std::cout << "Success!\n";

    return 0;
}
