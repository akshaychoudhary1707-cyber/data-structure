#include <iostream> // Required for input/output operations

int main() {
    // Outputting a string literal
    std::cout << "Hello, C++!" << std::endl; 

    // Declaring variables to store input
    std::string name;
    int age;

    // Prompting the user for input and reading a string
    std::cout << "Please enter your name: ";
    std::cin >> name; 

    // Prompting the user for input and reading an integer
    std::cout << "Please enter your age: ";
    std::cin >> age;

    // Outputting the collected information
    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;

    return 0; // Indicates successful program execution
}