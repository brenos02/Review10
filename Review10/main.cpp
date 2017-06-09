//
//  main.cpp
//  Review10
//
//  Created by Breno Sallouti on 09/06/17.
//  Copyright © 2017 Breno Sallouti. All rights reserved.
//Get input from user in inches and output in centimeters

#include <iostream>

int main(int argc, const char * argv[]) {
    float a;
    float b;
    b= 2.54;
    std::cout<<"Please input a value in inches: \n";
    std::cin>> a;
    std::cout<< "That value in centimeters is" << a*b;
    return 0;
}
