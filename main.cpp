#include <iostream>
#include <random>
#include "randgen.h"
#include "menu_output.cpp"

int main() {
    int lowerBound, upperBound;
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
            case GENERATE_RANDOM:
                std::cout << "Please insert the lowest number of the range: ";
                std::cin >> lowerBound;
                std::cout << "Now insert the highest number of the range: ";
                std::cin >> upperBound;

                if (lowerBound > upperBound) {
                    std::cerr << "Error: The upper limit is lesser than the lower bound." << std::endl;
                    continue;
                }

                {
                    std::random_device rd;
                    std::mt19937 gen(rd());
                    std::uniform_int_distribution<> dis(lowerBound, upperBound);

                    std::cout << "Random number generated: " << dis(gen) << std::endl;
                }
                break;

            case GENERATE_SEED:
                // Implementación futura para generar una semilla
                break;

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