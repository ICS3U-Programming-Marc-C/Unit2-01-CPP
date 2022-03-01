// Copyright (c) 2022 Coffi All rights reserved.


// Created by: Marc Coffi

// Date: Feb 28, 2022

/* 
 This is a program that calculates the area and the circumference
 of a circle with a radius of 15mm.
*/

#include <iostream>
#include <cmath>

double pi = 3.1415926535897;

int main() {
    std::cout << "If a circle has a radius of 15mm\n";
    std::cout << "The Area is " << pi*(pow(15, 2)) << "mm^2.\n";
    std::cout << "The Circumference is " << 2*(pi*15) << "mm.\n";
}
