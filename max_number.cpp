// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Jan 2021
// This program for arrarys

#include <iostream>
#include <random>


int max_number(int my_numbers[10], int loop_number) {
    // This function is for calculate

    int basic_number = 0;

    // process
    for (loop_number = 0; loop_number < my_numbers[loop_number];
         loop_number++) {
        if (my_numbers[loop_number] >= basic_number) {
            basic_number = my_numbers[loop_number];
        }
    } return basic_number;
}


int main() {
    // This function is for arrarys

    int my_numbers[10];
    int some_variable;
    int loop_number;
    int largest_number;

    // process
    for (loop_number = 0; loop_number < 10; loop_number++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());  // mersenne_twister
        std::uniform_int_distribution<int> idist(0, 10);  // [0,100]
        some_variable = idist(rgen);
        my_numbers[loop_number] = some_variable;
    }
    // call function
    largest_number = max_number(my_numbers, loop_number);
    for (loop_number = 0; loop_number < 10; loop_number++) {
        std::cout << "The number is: " << my_numbers[loop_number] << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "The largest number is: " << largest_number;
}
