//
//  bubbleSort.cpp
//  learning-cpp
//
//  Created by lionel souop on 22/12/2019.
//  Copyright © 2019 lionel souop. All rights reserved.
//

#include "bubbleSort.hpp"
#include <iostream>
#include <iterator>

void bubbleSort(int array[], const int arraySize){
    for(int turn{0}; turn < arraySize - 1; ++turn){
        for(int index{0}; index < arraySize; ++index){
            if((index + 1 < arraySize) && array[index + 1] > array[index]){
                int tmp{array[index]};
                array[index] = array[index + 1];
                array[index + 1] = tmp;
            }
            
        }
    }
}

