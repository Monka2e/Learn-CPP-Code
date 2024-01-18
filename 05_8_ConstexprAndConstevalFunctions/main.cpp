#include <type_traits>
#include <iostream>

consteval int cEvalFunction(int x) {
    return x + 5;
}

constexpr int cExprFunction(int x) {
    if (std::is_constant_evaluated())
        return x + 5;
    else
        return x;
}

int main() {
    constexpr int x {5};
    int y {4};
    std::cout << cEvalFunction(x) << '\n';
    // std::cout << constevalFunction(y) << '\n'; // This line gives compile error: the value of 'y' is not used in a constant expression

    std::cout << cExprFunction(x) << '\n';
    std::cout << cExprFunction(y) << '\n';

    constexpr int c {cExprFunction(5)};
    std::cout << c << '\n';

    constexpr int g {cExprFunction(x)};
    std::cout << g << '\n';

    return 0;
}
