// Copyright (c) 2026 Kaylee R All rights reserved.
// .
// Created by: Kaylee R
// Date: 01,11,2026
// This program calculates
// the factorial of the user's number

#include <iostream>
#include <string>

int main() {
    // declare variables
    int userInt, factorial, counter;
    std::string userNum;
    float userNumF;

    // set variables to have values
    counter = 0;
    factorial = 1;

    // get user number
    std::cout <<"Enter a positive whole number: ";
    std::cin >> userNum;

    // check if user number is an integer
    try {
        userInt = std::stoi(userNum);
        userNumF = std::stof(userNum);
        if (userInt == userNumF) {
            if (userInt >= 0) {
            do {
                counter = counter + 1;
                factorial = factorial * counter;
                std::cout <<"Tracking " <<counter;
                std::cout <<" times through the loop \n";
            } while (counter < userInt);
        std::cout <<"The factorial of " <<userInt;
        std::cout <<" is " <<factorial <<std::endl;
        } else {
            std::cout <<"Number inputs must be positive\n";
        }
        } else {
        std::cout <<"Number inputs must be whole numbers \n";
        }
    } catch (std::invalid_argument) {
        std::cout <<userNum <<" is not a positive integer\n";
    }
}
