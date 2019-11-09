// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Oct 2019
// This program uses a nested loop

#include <iostream>

int main() {
    // this function uses a nested loop
    int redCounter;
    int greenCounter;
    int blueCounter;

    // process & output
    for (redCounter = 0; redCounter < 256; redCounter++) {
        for (greenCounter = 0; greenCounter < 256; greenCounter++) {
            for (blueCounter = 0; blueCounter < 256; blueCounter++) {
                std::cout << "RGB ( " << redCounter << ", " << greenCounter
                          << ", "
                          << blueCounter << ")" << std::endl;
        }
    }
}
}
