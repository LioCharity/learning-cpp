//
//  main.cpp
//  learning-cpp
//
//  Created by lionel souop on 20/12/2019.
//  Copyright © 2019 lionel souop. All rights reserved.
//

#include <iostream>
#include "iostream/console_input_output.hpp"

#include "conditionalCompilationAndMacro/conditionalCompilationAndMacros.hpp"

int main(int argc, const char * argv[]) {
    // ************** iostream **********************
    consoleInputOutput();
    
    //************ conditionalCompilationAndMacro ****************
    double resultAddition {genericOperator(1, 2, "+")};
    std::cout << "The result of the addition is: " << resultAddition << '\n';
    //the multiplication is not defined so the part of the code performing the multiplication won't be compiled and the default value will be returned
    double resultMultiplication {genericOperator(1, 2, "*")};
    std::cout << "The result of the multiplication is: " << resultMultiplication << '\n';
    
    
    
    return 0;
}
