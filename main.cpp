//
//  main.cpp
//  learning-cpp
//
//  Created by lionel souop on 20/12/2019.
//  Copyright © 2019 lionel souop. All rights reserved.
//

#include <iostream>
#include "utils/utils.hpp"
#include "iostream/console_input_output.hpp"
#include "conditionalCompilationAndMacro/conditionalCompilationAndMacros.hpp"
#include "dataTypeAndSize/typesAndSize.hpp"
#include "arraySorting/bubbleSort.hpp"
#include "arraySorting/selectionSort.hpp"
#include "arraySorting/quickSort.hpp"
//#define CONSOLE_IO
//#define CONDITIONAL_COMPILE_AND_MACRO
//#define TYPE_AND_SIZE
#define ARRAY_SORTING

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
    
#ifdef ARRAY_SORTING
    int arrayOfInt1[]{45,2,89,5,43,1,7,65,34,2,1,78,5,4,23,4,54};
    const int arrayLength {static_cast<int>(sizeof(arrayOfInt1) / sizeof(arrayOfInt1[0]))};
    std::cout << "Bubble sort descending mode: \n";
    bubbleSort(arrayOfInt1, arrayLength);
    printArray(arrayOfInt1, arrayLength);
    
    std::cout << "Selection sort descending mode: \n";
    int arrayOfInt2[]{45,2,89,5,43,1,7,65,34,2,1,78,5,4,23,4,54};
    selectionSort(arrayOfInt2, arrayLength);
    printArray(arrayOfInt2, arrayLength);
    
    std::cout << "Quick sort ascending mode: \n";
    int arrayOfInt3[]{45,2,89,5,43,1,7,65,34,2,1,78,5,4,23,4,54};
    
    quickSort(arrayOfInt3, 0, 16);
    printArray(arrayOfInt3, 17);
#endif
    return 0;
}
