#include <limits> // for std::numeric_limits
#include <iostream>

void ignoreLine() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

double getDouble() {
    while (true) {
        std::cout << "Enter a decimal number: ";
        double x{};
        std::cin >> x;  

        if (!std::cin) { // If previous extraction failed
            if (std::cin.eof()) {
                exit(0);
            }

            std::cin.clear(); // change back to normal state from failed state
            ignoreLine();
            continue;
        } else if (!std::cin.eof() && std::cin.peek() != '\n') { // If previous extraction succeeded but there is leftover input in the buffer
            ignoreLine();
            continue;
        }

        return x;
    }
}

char getOperator() {
    while (true) {
        std::cout << "Enter one of the following: +, -, *, or /: ";
        char op{};
        std::cin >> op;

        if (!std::cin) {
            if (std::cin.eof()) {
                exit(0);
            }

            std::cin.clear();
        }
        ignoreLine();

        switch(op) {
        case '+':
        case '-':
        case '*':
        case '/':
            return op;
        default:
            std::cout << "Oops, that input is invalid. Please try again.\n";
        }
    }
}

void printResult(double x, char operation, double y) {
    switch (operation)
    {
    case '+':
        std::cout << x << " + " << y << " is " << x + y << '\n';
        break;
    case '-':
        std::cout << x << " - " << y << " is " << x - y << '\n';
        break;
    case '*':
        std::cout << x << " * " << y << " is " << x * y << '\n';
        break;
    case '/':
        std::cout << x << " / " << y << " is " << x / y << '\n';
        break;
    }
}

int main() {
    double x{ getDouble() };
    char operation{ getOperator() };
    double y{ getDouble() };

    printResult(x, operation, y);

    return 0;
}
