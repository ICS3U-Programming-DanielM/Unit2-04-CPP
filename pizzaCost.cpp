// Copyright (c) 2022 Daniel Momoh All rights reserved.
//
// Created by: Daniel M
// Date: Sep 29, 2022
// This program asks the user for the Inches and then
// displays the Pizza cost.
#include <cmath>
#include <iostream>

int main() {
    // declare constants
    const float HST = 0.13;
    const float LABOUR_COST = 2.00;
    const float RENTAL_COST = 2.25;
    const float INGRED_COST = 1.5;

    // declare variables
    float Inches, subtotal, tax, total, total1, total2;

    // get the Inches from the user
    std::cout << "Enter the Inches: ";
    std::cin >> Inches;

    // calculate the subtotal using LABOUR_COST,
    // RENTAL_COST, INGRED_COST and Inches
    subtotal = LABOUR_COST + RENTAL_COST + INGRED_COST * Inches;

    // calculate the tax using HST and subtotal
    tax = HST * subtotal;

    // calculate the total using tax and subtotal
    total = subtotal + tax;
    total1 = int(total * 100 + .5);
    total2 = total1 / 100;

    // display the total to the user
    std::cout << "\n";
    std::cout << "total = $ " << total2 << std::endl;
}