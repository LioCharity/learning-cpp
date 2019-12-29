//
//  forEachAndReferences.cpp
//  learning-cpp
//
//  Created by lionel souop on 28/12/2019.
//  Copyright © 2019 lionel souop. All rights reserved.
//

#include <iostream>
#include <cctype>
#include "forEachAndReferences.hpp"

/*
 Declare a fixed array with the following names: alex, betty, caroline, dave, emily, fred, greg, and holly.
 Ask the user to enter a name. Use a for each loop to see if the name the user entered is in the array.
 */

bool doesNameExist(){
    const int numberOfNames{8};
    const std::string names[numberOfNames]{"alex", "betty", "caroline", "dave", "emily", "fred", "greg", "holly"};
    std::string aName;
    
    std::cout << "Enter a name:";
    std::cin >> aName;
    convertStringToLowerCase(aName);
    // the type is deducted, a reference is used to avoid making a copy. n is a const  so can' t be modified
    // I want to avoid dirting the original array.
    for(const auto &n: names){
        if(aName == n){
            return true;
        }
    }
    return false;
}

void convertStringToLowerCase(std::string &aStr){
    // use of a lambda expression
    std::transform(aStr.begin(), aStr.end(), aStr.begin(), [](unsigned char c){return std::tolower(c);});
}
