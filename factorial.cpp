// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Sep 2022
// This program is a random number guessing game

#include <iostream>
#include <string>

int main() {
    // this function generates a random number
    std::string stringNumber;
    int intNumber;
    int loopCounter = 0;
    int answer = 1;

    // input
    std::cout << "This program calculates factorials." << std::endl;
    std::cout << "Enter a integer: ";
    std::cin >> stringNumber;

    // process and output
    try {
        intNumber = std::stoi(stringNumber);
        do {
            loopCounter = loopCounter + 1;
            answer = answer * loopCounter;
        } while (loopCounter < intNumber);
        std::cout << "The answer is " << answer << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid Integer.";
    }
    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}
