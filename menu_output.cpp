#include "randgen.h"

void errorMessager() {
    std::cout << "Invalid index. Please enter a correct index: " << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void welcomer() {
    std::cout << "Welcome to RandGen!" << std::endl;
    std::cout << "--------------------------------------" << std::endl;
    std::cout << "Please select an option below: " << std::endl;
    std::cout << "1. Generate a random number" << std::endl;
    std::cout << "2. Generate a seed" << std::endl;
    std::cout << "3. Exit" << std::endl;
}