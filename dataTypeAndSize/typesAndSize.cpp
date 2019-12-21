//
//  typesAndSize.cpp
//  learning-cpp
//
//  Created by lionel souop on 21/12/2019.
//  Copyright © 2019 lionel souop. All rights reserved.
//

#include "typesAndSize.hpp"
#include <iostream>
#include <cstdint>
#include <iomanip> // for std::setprecision()

void dataTypesAndSize(){
    int interger{1}; // at least 2 bytes
    std::cout << "Integer size: " << sizeof(interger) << " Bytes\n";
    
    short shortInteger{1}; // at least 2 bytes
    std::cout << "shortInteger size: " << sizeof(shortInteger) << " Bytes\n";
    
    long longInteger{1}; // at least 4 bytes
    std::cout << "longInteger size: " << sizeof(longInteger) << " Bytes\n";
    
    long long superLongInteger{1}; // at least 8 bytes
    std::cout << "superLongInteger size: " << sizeof(superLongInteger) << " Bytes\n";
    
    unsigned int uInterger{1}; // at least 2 bytes
    std::cout << "uInterger size: " << sizeof(uInterger) << " Bytes\n";
    
    unsigned short uShortInteger{1}; // at least 2 bytes
    std::cout << "uShortInteger size: " << sizeof(uShortInteger) << " Bytes\n";
    
    unsigned long uLongInteger{1}; // at least 4 bytes
    std::cout << "uLongInteger size: " << sizeof(uLongInteger) << " Bytes\n";
    
    unsigned long long uSuperLongInteger{1}; // at least 8 bytes
    std::cout << "uSuperLongInteger size: " << sizeof(uSuperLongInteger) << " Bytes\n";
    
    // fixed width integer adopted in c++11 in the name space std
    std::int64_t int64Bytes{1};
    std::cout << "int64Bytes size: " << sizeof(int64Bytes) << " Bytes\n";
    
    //fast integer in the namespace std from c++11: the fastest int with a width
    // of at least 64 bits
    std::int_fast64_t fastInteger{1};
    std::cout << "fastInteger size: " << sizeof(fastInteger) << " Bytes\n";
    
    //least integer in the namespace std from c++11: the smallest signed integer with
    // a width of at least 64 bits
    std::int_least64_t leastInteger{1};
    std::cout << "leastInteger size: " << sizeof(leastInteger) << " Bytes\n";
    
    // size_t is designed to hold the size of the biggest object that can be created
    std::size_t aSizeOfLeastInteger{sizeof(leastInteger)};
    std::cout << "aSizeOfLeastInteger size: " << sizeof(aSizeOfLeastInteger) << " Bytes\n";
    
    std::cout << "Warning: std::int8_t and std::uint8_t may behave like chars instead of integers: they should be avoided or used cautiously\n";
    //overflow: uint can' t go overflow
    
    float floatNumber{1.0f};
    double doubleFloat{2.0};
    long double longDoubleFloat{3.33333333333333333333333333333333333333};
    std::cout << std::setprecision(16); // show 16 digits of precision
    std::cout << "floatNumber size: " << sizeof(floatNumber) << " Bytes\n";
    std::cout << "doubleFloat size: " << sizeof(doubleFloat) << " Bytes\n";
    std::cout << "longDoubleFloat size: " << sizeof(longDoubleFloat) << " Bytes\n";
    std::cout << "longDoubleFloat: " << longDoubleFloat << '\n';
    
    bool b1{true};
    std::cout << "b1 size: " << sizeof(b1) << " Bytes\n";
    // will print the boolean as 0 or 1
    std::cout << "The value of b1 is: " << b1 << '\n';
    // force to print bool as true or false
    std::cout << std::boolalpha;
    std::cout << "The value of b1 is: " << b1 << '\n';
    // warning if getting bool value from input.
    std::cout << "std::cin only accepts two inputs for Boolean variables: 0 and 1 (not true or false anything else will silently fail)";
    
    char ch2{'a'};
    std::cout << "The integer value of char 'a' is: " << static_cast<int>(ch2) << '\n'; // print the integer value
    
    // constant value can't be changed
    const double aConstantDouble{9.8};
    printDouble(aConstantDouble);
    
    // the following notation is preferred over #define to create symbolic constants macros.
    constexpr int maxStudentsPerClass { 30 };
    constexpr int maxNameLength { 30 };
}

// Making a function parameter const does 2 thing: It tells the person calling the
//function that the passed value won't be change and make sur the passed value is not changed
void printDouble(const double iDouble){
    std::cout << "The double value is: " << iDouble << '\n';
}
