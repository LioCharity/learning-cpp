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
#include "pointers_array_struct/pointers_array.hpp"
#include "pointers_array_struct/iterators.hpp"
#include "linkedList/linkedList.hpp"
#include "forEachAndReferences/forEachAndReferences.hpp"

//#define CONSOLE_IO
//#define CONDITIONAL_COMPILE_AND_MACRO
//#define TYPE_AND_SIZE
//#define ARRAY_SORTING
//#define POINTERS
//#define LINKED_LIST
#define FOR_EACH_REFERENCES

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
    
#ifdef POINTERS
    pointers();
    pointersAndStruct();
    int anArray[]{45,2,89,5,43,1,7,65,34,2,1,78,5,4,23,4,54};
    const int threshold{10};
    int numberOfElements{countElementBelowThreshold(anArray, sizeof(anArray)/sizeof(anArray[0]), threshold)};
    std::cout << "Number of elements lower than the threshold: " << numberOfElements << '\n';
    
    std::string *arrayOfName{pointersAndArray()};
    if(arrayOfName){
        delete[] arrayOfName;
    }

    loopOverArrays();
#endif
    
#ifdef LINKED_LIST
    Student* aStudentList{initializeLinkedList("lionel", 18, 29)};
    std::cout << "List length after init: " << listLength(aStudentList) << '\n';
    appendElement(aStudentList, "brice",18, 30);
    std::cout << "List length after append: " << listLength(aStudentList) << '\n';
    
    aStudentList = addInPosition(aStudentList, "souop", 18, 25, 1);
    std::cout << "List length after add in position 1: " << listLength(aStudentList) << '\n';
    std::cout << "Element in position 1: " << aStudentList->next->name << '\n';
    
    aStudentList = addInPosition(aStudentList, "Ahmed", 18, 25, 0);
    std::cout << "List length after add in position 0: " << listLength(aStudentList) << '\n';
    std::cout << "Element in position 0: " << aStudentList->name << '\n';
    
    Student* aStudent{getElementAtPosition(aStudentList, 1)};
    std::cout << "Get element at position 1: " << aStudent->name << '\n';
    delete aStudent;
    aStudent = nullptr;
    
    aStudentList = deleteElementAtPosition(aStudentList, 1);
    std::cout << "List length after delete element in position 1: " << listLength(aStudentList) << '\n';
    aStudent = getElementAtPosition(aStudentList, 1);
    std::cout << "Get element at position 1: " << aStudent->name << '\n';
    
    std::cout << "List length: " << listLength(aStudentList) << '\n';
    
    aStudentList = destroyList(aStudentList);
    if(!aStudentList)
        std::cout << "The list has been successfully destroyed.\n";
    else
        std::cout << "Error: the list has not been destroyed.\n";
    
    // the following line will throw an exception because the list is not long 100 elements.
    //aStudentList = addInPosition(aStudentList, "souop", 18, 25, 100);
    
    // delete
    
#endif
    
#ifdef FOR_EACH_REFERENCES
    if(doesNameExist())
        std::cout << "\nThe name is exists!\n";
    else
        std::cout << "\nThe name does not exist!\n";
#endif
    
    return 0;
}
