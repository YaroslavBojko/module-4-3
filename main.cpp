#include <iostream>

int main() {
    int number;
    std::cout << "Enter the number: ";
    std::cin >> number;
    std::cout << "-----Checking-----" << std::endl;

    if(number % 2 == 0)
        std::cout << "Number " << number << " is even" << std::endl;
    else
        std::cout << "Number " << number << " is not even" << std::endl;
}
