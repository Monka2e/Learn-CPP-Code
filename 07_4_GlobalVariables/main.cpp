#include <iostream>

int g_answer {42};

namespace foo {
    constexpr int answer {42};
}

void changeAnswer() {
    ++g_answer;
}

int main() {
    std::cout << foo::answer << '\n';
    std::cout << g_answer << '\n';
    changeAnswer();
    std::cout << g_answer << '\n';
    
    return 0;
}
