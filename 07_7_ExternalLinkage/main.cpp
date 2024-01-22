#include <iostream>

extern int g_x; // forward decleration of g_x defined elsewhere
extern const int g_y; // forward decleration of g_y defined elsewhere

int main() {
    std::cout << g_x << ", " << g_y << '\n';

    return 0;
}
