//
//  conditionalCompilationAndMacros.cpp
//  learning-cpp
//
//  Created by lionel souop on 20/12/2019.
//  Copyright © 2019 lionel souop. All rights reserved.
//

#include <iostream>
#include "conditionalCompilationAndMacros.hpp"
#define DIVISION

double genericOperator(int iFirstValue, int iSecondValue, std::string iOperator){
    
    if(iOperator == "+"){
        return iFirstValue + iSecondValue;
    }
    if (iOperator == "-"){
        return iFirstValue - iSecondValue;
    }
#ifdef MULTIPLICATION
    if (iOperator == "*"){
        return iFirstValue * iSecondValue;
    }
#endif
#ifdef DIVISION
    // if DIVISION is defined, compile this code
    if (iOperator == "/"){
        if(iSecondValue != 0)
          return iFirstValue + iSecondValue;
    }
#endif
    
#ifndef MULTIPLICATION
    std::cout << "The Multiplication operator is not active" << '\n';
#endif

    // The preprocessor directive will prevent anything starting here to be compiled: #if <condition>. The condition can be anything
#if 0 //don't compile anything starting here
    std::cout << "Nothing here will be compiled: This message is useless. It won't even be displayed" << '\n';
#endif // until this point
    return 0.0;
}
