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
#include "dataTypeAndSize/typesAndSize.hpp"
#define CONSOLE_IO
#define CONDITIONAL_COMPILE_AND_MACRO
#define TYPE_AND_SIZE

int main(int argc, const char * argv[]) {
    
#ifdef CONSOLE_IO
    consoleInputOutput();
#endif
    
    
#ifdef CONDITIONAL_COMPILE_AND_MACRO
    double resultAddition {genericOperator(1, 2, "+")};
    std::cout << "The result of the addition is: " << resultAddition << '\n';
    //the multiplication is not defined so the part of the code performing the multiplication won't be compiled and the default value will be returned
    double resultMultiplication {genericOperator(1, 2, "*")};
    std::cout << "The result of the multiplication is: " << resultMultiplication << '\n';
#endif
    
#ifdef TYPE_AND_SIZE
    dataTypesAndSize();
#endif
    
    return 0;
}
