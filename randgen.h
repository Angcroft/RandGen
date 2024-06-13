#ifndef RANDGEN_H
#define RANDGEN_H

#include <iostream>
#include <chrono>
#include <random>

// Function declarations
void welcomer();
void errorMessager();
void generateSeed();
bool generator(int& lowerBound, int& upperBound);
void generated(int lb, int ub);

#endif // RANDGEN_H