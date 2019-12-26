//
//  pointers_array.cpp
//  learning-cpp
//
//  Created by lionel souop on 24/12/2019.
//  Copyright © 2019 lionel souop. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include "pointers_array.hpp"
#include "../utils/utils.hpp"
void pointers(){
    // declare pointer
    int *aIntPointer;
   
    // assign the address of avalue to the pointer
    int aValue{10};
    aIntPointer = &aValue;
    std::cout << "Pointer: Size: " << sizeof(aIntPointer) << '\n';
    std::cout << "Pointer: Address: " << aIntPointer << '\n';
    std::cout << "Pointer: Value: " << *aIntPointer << '\n'; // print 10
    
    int aValue2{20};
    aIntPointer = &aValue2;
    std::cout << "Pointer: Size: " << sizeof(aIntPointer) << '\n';
    std::cout << "Pointer: Address: " << aIntPointer << '\n';
    std::cout << "Pointer: Value: " << *aIntPointer << '\n'; // print 20

    int *aPtr{nullptr}; // the same as *aPtr{0} or aPtr = 0 (after the pointer declaration)
    /*
     If the pointer point to NULL, in the condition it will be turned to non-zero and to zero in the opposite case
     */
    if(aPtr)
        std::cout << "The pointer is NOT NULL\n";
    else
        std::cout << "The pointer is NULL\n";
}

void pointersAndStruct(){
    Traveler *aTravelerPtr{new(std::nothrow) Traveler}; //value will be set to a null pointer if the Traveler allocation fails
    if(!aTravelerPtr){ // check if the memory allocation was sucessful
        std::cout << "Could not allocate memory\n";
    }
    aTravelerPtr->age = 30;
    aTravelerPtr->name = "souop";
    aTravelerPtr->destination = "yaounde";
    
    std::cout << "Pointer size: " << sizeof(aTravelerPtr) << " Bytes\n";
    std::cout << "Traveler Type size: " << sizeof(*aTravelerPtr) << " Bytes\n";
    std::cout << "Traveler name: " << aTravelerPtr->name << '\n';
    std::cout << "Traveler destination: " << aTravelerPtr->destination << '\n';
    std::cout << "Traveler age: " << aTravelerPtr->age << '\n';
    
    delete aTravelerPtr;
}

/*
 The method loop over the arry with pointers and count the elements lower than the threshold
 */
int countElementBelowThreshold(int *array, const int arraySize, const int threshold){
    int numberOfElements{0};
    for(int* index{array}; index < (array + arraySize ); ++index)
    {
        if(*index < threshold)
            numberOfElements++;
    }
    return numberOfElements;
}

/*
 The method ask the user how many names will be entered
 Ask to enter name by name
 return the array of names
 */
std::string* pointersAndArray()
{
    std::cout << "how many names will be entered: \n";
    
    unsigned int numberOfNames{0};
    std::cin >> numberOfNames;
    std::cout << "You would like to enter : " << numberOfNames << " names\n";
    std::string *arrayOfNames{new(std::nothrow) std::string[numberOfNames + 1]{}};
    
    if(!arrayOfNames){
        std::cout << "Error - Impossible to allocate memory\n";
        return nullptr;
    }
    
    for(int index{0}; index < numberOfNames; ++index){
        std::cout << "Enter name number " << index + 1 << ": \n";
        std::cin >> arrayOfNames[index];
    }
    
    std::cout << "All the names: \n";
    for(int index{0}; index < numberOfNames; ++index){
        std::cout << arrayOfNames[index] << " ";
    }
    
    return arrayOfNames;
}
