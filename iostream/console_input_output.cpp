//
//  console_input_output.cpp
//  learning-cpp
//
//  Created by lionel souop on 20/12/2019.
//  Copyright © 2019 lionel souop. All rights reserved.
//

#include "console_input_output.hpp"
#include <stdio.h>
#include <iostream>

void consoleInputOutput(){
    std::cout << "Enter an integer followed by 'Enter':";
    int number{}; //Uniform initialization to 0
    /*
     - If a decimal number is entered, only the integer part will be displayed
     - If anyting else than an integer is entered, the number 0 will be displayed
     */
    std::cin >> number;
    
    //print the number: \n performs better than std::endl because the redundant flushing to the output is removed.
    std::cout << "The number entered is: " << number << '\n';
    
    return;
}
