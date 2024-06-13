#include <iostream>
#include <random>
#include "randgen.h"
#include "menu_output.cpp"

int main() {
    int index;

    //  Main Menu
    constexpr int GENERATE_RANDOM = 1;
    constexpr int GENERATE_SEED = 2;
    constexpr int EXIT_PROGRAM = 3;

    while (true) {
        welcomer();
        std::cin >> index;

        if (std::cin.fail() || index < 1 || index > 3) {
            errorMessager();
            continue;
        }

        switch(index) {
            case GENERATE_RANDOM: {
                int lowerBound, upperBound;
                bool success = generator(lowerBound, upperBound);

                if (!success) {
                    std::cerr << "Error: The upper limit is lesser than the lower bound." << std::endl;
                    continue;
                } else {
                    generated(lowerBound, upperBound);
                }

                std::cout << "New number generated." << std::endl;
                break;
            }
            
            case GENERATE_SEED: {
                int lowerBound, upperBound;
                bool success = generator(lowerBound, upperBound);

                if(!success) {
                    std::cerr << "Error: The upper limit is lesser than the lower bound." << std::endl;
                    continue;
                } else {
                    generateSeed(lowerBound, upperBound);
                }
                std::cout << "New number generated." << std::endl;
                break;
            }

            case EXIT_PROGRAM:
                std::cout << "Exiting the program..." << std::endl;
                return 0;

            default:
                std::cout << "Incorrect index. Please enter a correct index." << std::endl;
                continue;
        }
    }

    return 0;
}