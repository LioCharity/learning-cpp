//
//  utils.cpp
//  learning-cpp
//
//  Created by lionel souop on 22/12/2019.
//  Copyright © 2019 lionel souop. All rights reserved.
//

#include "utils.hpp"
#include <iostream>

void printArray(int array[], const int arrayLength){
    for(int index{0}; index < arrayLength; ++index)
        std::cout << array[index] << ", ";
    std::cout << '\n';
}
