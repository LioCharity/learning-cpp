//
//  selectionSort.cpp
//  learning-cpp
//
//  Created by lionel souop on 22/12/2019.
//  Copyright © 2019 lionel souop. All rights reserved.
//

#include "selectionSort.hpp"
#include <limits>

void selectionSort(int array[], const int arraySize){
    for(int index{0}; index < arraySize; ++index){
        int maxIndex{findMaximumIndex(array, index, arraySize - 1)};
        int tmp{array[maxIndex]};
        array[maxIndex] = array[index];
        array[index] = tmp;
    }
}

int findMaximumIndex(int array[], int startIndex, int endIndex){
    int max{-999};
    int maxIndex{-1};
    for(int index{startIndex}; index <= endIndex; ++index){
        if(array[index] > max){
            max = array[index];
            maxIndex = index;
        }
    }
    return maxIndex;
}
