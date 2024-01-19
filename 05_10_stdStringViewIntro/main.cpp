#include <iostream>
#include <string>
#include <string_view>

void printString(std::string str) {
    std::cout << str << '\n';
}

void printStringV(std::string_view strv) {
    std::cout << strv << '\n';
}

int main() {
    std::string_view sv1 {"#1"};
    std::cout << sv1 << '\n';

    sv1 = "#2";
    std::cout << sv1 << '\n';

    std::string s1 {"#3"};
    sv1 = s1;
    std::cout << sv1 << '\n';

    // Implicitly casted string_view to string
    std::string_view sv2 {"#4"};
    std::string s2 {sv2}; 
    std::cout << s2 << '\n';

    // Must be explicitly casted when function expects string
    sv1 = "#5";
    printString(static_cast<std::string>(sv1)); 

    // string_view function parameters accepts 
    printStringV("#6");
    s1 = "#7";
    printStringV(s1);
    sv1 = "#8";
    printStringV(sv1);

    // Code directly copied from lesson below
    using namespace std::string_literals;      // access the s suffix
    using namespace std::string_view_literals; // access the sv suffix

    std::cout << "foo\n";   // no suffix is a C-style string literal
    std::cout << "goo\n"s;  // s suffix is a std::string literal
    std::cout << "moo\n"sv; // sv suffix is a std::string_view literal

    return 0;
}
