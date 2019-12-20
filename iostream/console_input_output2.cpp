//
//  console_input_output.cpp
//  learning-cpp
//
//  Created by lionel souop on 20/12/2019.
//  Copyright © 2019 lionel souop. All rights reserved.
//

#include <stdio.h>
#include <iostream>

void consoleInputOutput(){
    std::cout << "Enter an integer followed by 'Enter':";
    int number{};
    std::cin >> number;
    
    //print the number
    std::cout << "The number entered is: " << number << '\n';
    
    return;
}
