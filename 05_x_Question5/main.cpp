#include <iostream>
#include <string>
#include <string_view>

std::string getPerson(int personNum) {
    std::cout << "Enter the name of person #" << personNum << ": ";
    std::string name {};
    std::getline(std::cin >> std::ws, name);

    return name;
}

int getAge(std::string_view sv) {
    std::cout << "Enter the age of " << sv << ": ";
    int age {};
    std::cin >> age;
    
    return age;
}

void printOlder(std::string_view person1, int age1, std::string_view person2, int age2) {
    if (age1 > age2)
        std::cout << person1 << " (age " << age1 << ") is older than " << person2 << " (age " << age2 << ")\n";
    else
        std::cout << person2 << " (age " << age2 << ") is older than " << person1 << " (age " << age1 << ")\n";
}

int main() {
    std::string person1 {getPerson(1)};
    int age1 {getAge(person1)};

    std::string person2 {getPerson(2)};
    int age2 {getAge(person2)};

    printOlder(person1, age1, person2, age2);

    return 0;
}
