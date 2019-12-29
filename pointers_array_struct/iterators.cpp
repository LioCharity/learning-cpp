//
//  iterators.cpp
//  learning-cpp
//
//  Created by lionel souop on 29/12/2019.
//  Copyright © 2019 lionel souop. All rights reserved.
//

#include <iostream>
#include <array>
#include <iterator>
#include "iterators.hpp"


void loopOverArrays(){
    const int arrayLength{10};
    std::array<int, arrayLength> arrayOfInteger{3,56,2,13,56,8,9,0,5,2};
    
    // Loop with pointers
    auto begin{&arrayOfInteger[0]};
    auto end{begin + sizeof(arrayOfInteger)/sizeof(arrayOfInteger[0])};
    for(auto ptr{begin}; ptr != end; ++ptr){
        std::cout << *ptr << " ";
    }
    std::cout << '\n';
    
    // tool provided by the standard library
    auto aBeginning{arrayOfInteger.begin()};
    auto aEnd{arrayOfInteger.end()};
    for(auto ptr{aBeginning}; ptr != aEnd; ++ptr){
        std::cout << *ptr << " ";
    }
    std::cout << '\n';
    
    //use of generic function in the iterator header
    auto aBeginning2{std::begin(arrayOfInteger)};
    auto aEnd2{std::end(arrayOfInteger)};
    for(auto ptr{aBeginning2}; ptr != aEnd2; ++ptr){
        std::cout << *ptr << " ";
    }
    
}
