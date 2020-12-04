// Copyright (c) 2020 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on December 2 2020
// this program checks if the number placed is negative or positive

#include <iostream>

int main() {
    // this program checks if the number placed is negative or positive
    int number_of_choice;

    // input
    std::cout << "Enter an integer:";
    std::cin >> number_of_choice;
    std::cout << "" << std::endl;


    // process and output
    if (number_of_choice > 0) {
        std::cout << "The number you placed in is positive: +";
    } else if (number_of_choice < 0) {
        std::cout << "The number you placed in is negative: -";
    } else {
        std::cout << "The number you placed in is zero" << std::endl;
    }
}
