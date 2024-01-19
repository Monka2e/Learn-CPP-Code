#include <iostream>
#include <string>
#include <string_view>

int main()
{
    std::string_view animal {"Animal"};
    std::string_view zebra {"Zebra"};
    std::string_view horse {"Horse"};

    std::string_view zoo {"AnimalZebraHorse"};

    std::string_view sv {"AnimalZebraHorse"};
    std::cout << sv << '\n';
    sv.remove_prefix(animal.length());
    std::cout << sv << '\n';
    sv.remove_suffix(horse.length());
    std::cout << sv << '\n';
    sv = zoo;
    std::cout << sv << '\n';
    sv.remove_prefix(3);
    std::cout << sv << '\n';

    return 0;
}
