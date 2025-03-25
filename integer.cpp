// Copyright 2025 Xiaohan. All rights reserved.
// Created by Xiaohan
// Created on Mar 21, 2025
// This program is to ask users tp input an integer
// and find out if it is positive, negative or zero.

#include <iostream>
int main() {
    // declare the variable
    int integer;
    // get input from user
    std::cout << "Input an integer: ";
    // store the message to the variable
    std::cin >> integer;
    // when the variable is equal to zero
    if (integer == 0) {
        // output the result to the user
        std::cout << integer << " is just a zero";
        // if greater than 0
    } else if (integer > 0) {
        std::cout << integer << " is positive integer";
        // if smaller than 0
    } else if (integer < 0) {
        std::cout << integer << " is negative integer";
    }
    std::cout << "\n";
    std::cout << "Done!" << std ::endl;
}

