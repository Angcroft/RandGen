# RandGen: Random Number Generator

## Introduction

RandGen is a command-line application written in C++ for generating random numbers within a specified range. This project aims to provide a simple tool for generating random numbers and learning basic C++ programming concepts related to random number generation.

## Features

* Generate random numbers within a specified range.
* Option to generate a new seed for random number generation.
* User-friendly command-line interface (CLI).

To run this project, you'll need a C++ compiler and standard library that supports C++11 or later.

## Project Structure

The project consists of the following files:

* **main.cpp**: Contains the main logic and user interface.
* **randgen.h**: Header file with function declarations and necessary includes.
* **menu_output.cpp**: Source file implementing CLI menu functions.

## Instructions

1. Clone this repository:

```sh
git clone https://github.com/Angcroft/RandGen.git
```

2. Navigate to the project directory:

```sh
cd RandGen
```

3. Compile the code:

```sh
g++ -o RandGen main.cpp menu_output.cpp
```

4. Run the program:

```sh
./RandGen
```

## How it Works
When you run the program, you'll be presented with a menu where you can choose different options for generating random numbers or seeds.

### Main Menu Options
1. Generate a random number within a specified range.
2. Generate a new seed for random number generation.
3. Exit the program.

### Generate a Random Number
* Select "Generate a random number" from the main menu.
* Enter the lower and upper bounds of the range when prompted.
* The program will generate and display a random number within the specified range.

### Generate a Seed
* Select "Generate a seed" from the main menu.
* The program will generate a new seed based on the current system time and display it.

## Examples

### Generating a Random Number

```sh
Welcome to RandGen!
--------------------------------------
Please select an option below:
1. Generate a random number
2. Generate a seed
3. Exit

Enter choice: 1

Please insert the lowest number of the range: 1
Now insert the highest number of the range: 10

Random number generated: 7
```

### Generating a Seed

```sh
Welcome to RandGen!
--------------------------------------
Please select an option below:
1. Generate a random number
2. Generate a seed
3. Exit

Enter choice: 2

New seed generated: 1623559015
```

## About the Use of this Project

This project is not intended for contributions, but you are free to use the code for your own projects. In accordance with the MIT License, I grant everyone the freedom to use this code for any beneficial purpose.
