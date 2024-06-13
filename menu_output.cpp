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

void generateSeed(int lb, int ub) {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::cout << "Seed generated: " << seed << std::endl;

    std::mt19937 gen(seed);
    std::uniform_int_distribution<> dis(lb, ub);

    std::cout << "Random number by seed generated: " << dis(gen) << std::endl;
}

bool generator(int& lowerBound, int& upperBound) {
    std::cout << "Please insert the lowest number of the range: ";
    std::cin >> lowerBound;
    std::cout << "Now insert the highest number of the range: ";
    std::cin >> upperBound;

    if (lowerBound > upperBound) {
        return false;
    }

    return true;
}

void generated(int lb, int ub) {
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(lb, ub);

        std::cout << "Random number generated: " << dis(gen) << std::endl;
    }
}