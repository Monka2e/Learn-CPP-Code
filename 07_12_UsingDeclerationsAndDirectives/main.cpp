#include <iostream>

// Don't use using directives/declerations in global scope
// I would still prefer explicit '::' namespace notation in moist cases

void doSomething() { // fine use of using decleration as it's in a function block and the function isn't complex
    using std::cout;
    cout << "do something function\n";
}

void doSomethingElse() { // using directive has local scope of doSomethingElse()
    using namespace std;
    cout << "Enter a number ";
    int x {};
    cin >> x;
    cout << "You entered " << x << '\n';
}

int main() {
    doSomething();
    doSomethingElse();

    using namespace std;
    cout << "in main\n";

    return 0;
}
