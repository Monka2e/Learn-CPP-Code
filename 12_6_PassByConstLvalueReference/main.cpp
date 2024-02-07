/* From 12.6
Best practice

Prefer passing strings using std::string_view (by value) instead of const std::string&,
unless your function calls other functions that require C-style strings or std::string parameters.
*/

#include <string>
#include <iostream>

void printSomething(const std::string& s) { // reference s is not modifiable - again, it's preffered to pass a std::string_view by value over this
    std::cout << s << '\n';
}

int main() {
    std::string s {"Hello."};
    printSomething(s);

    return 0;
}
