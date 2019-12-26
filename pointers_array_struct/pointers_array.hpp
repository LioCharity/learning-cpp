//
//  pointers_array.hpp
//  learning-cpp
//
//  Created by lionel souop on 24/12/2019.
//  Copyright © 2019 lionel souop. All rights reserved.
//

#ifndef pointers_array_hpp
#define pointers_array_hpp

#include <stdio.h>

struct Traveler
{
    int age;
    std::string name;
    std::string destination;
};
void pointers();
void pointersAndStruct();
int countElementBelowThreshold(int *array, const int arraySize, const int threshold);
std::string* pointersAndArray();

#endif /* pointers_array_hpp */
