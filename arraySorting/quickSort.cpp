//
//  quickSort.cpp
//  learning-cpp
//
//  Created by lionel souop on 23/12/2019.
//  Copyright © 2019 lionel souop. All rights reserved.
//

#include "quickSort.hpp"
#include <iostream>

void quickSort(int array[], const int startIndex, const int endIndex)
{
    if(endIndex > startIndex)
    {
        int partitioner{partition(array, startIndex, endIndex)};
        quickSort(array, startIndex, partitioner);
        quickSort(array, partitioner + 1, endIndex);
    }
    return;
}


int partition(int array[], const int startIndex, const int endIndex)
{
    int pivot{array[startIndex]};
    int fromBeginningIndex{startIndex - 1};
    int fromEndIndex{endIndex + 1};
    
    while (fromBeginningIndex < fromEndIndex)
    {
        while(array[--fromEndIndex] > pivot);
        while(array[++fromBeginningIndex] < pivot);
        
        if (fromBeginningIndex < fromEndIndex) {
            int tmp = array[fromBeginningIndex];
            array[fromBeginningIndex] = array[fromEndIndex];
            array[fromEndIndex] = tmp;
        }
    }
    return fromEndIndex;
}
