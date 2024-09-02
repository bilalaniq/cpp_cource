#include <iostream>

// Functor class definition
class AddFunctor {
public:
    // Overloading the function call operator ()
    int operator()(int a, int b) {
        return a + b;
    }
};

int main() {
    // Creating an instance of the AddFunctor
    AddFunctor add;

    // Calling the functor as if it were a function
    int result = add(3, 5);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
