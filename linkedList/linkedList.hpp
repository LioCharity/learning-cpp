//
//  linkedList.hpp
//  learning-cpp
//
//  Created by lionel souop on 25/12/2019.
//  Copyright © 2019 lionel souop. All rights reserved.
//

#ifndef linkedList_hpp
#define linkedList_hpp

#include <stdio.h>
#include <iostream>

struct Student
{
    std::string name;
    int age;
    double grade;
    Student* next;
};

Student* initializeLinkedList(const std::string iStudentName, const int iStudentAge, const double iStudentGrade);
void appendElement(Student* iStrudent, const std::string iStudentName, const int iStudentAge, const double iStudentGrade);
Student* addElementToHead(Student* iStrudent, const std::string iStudentName, const int iStudentAge, const double iStudentGrade);
Student* addInPosition(Student* iStrudent, const std::string iStudentName, const int iStudentAge, const double iStudentGrade, const int position);
int listLength(const Student* iStrudent);
Student* copyElement(const Student* iStudent);
Student* getElementAtPosition(Student* iStudent, const int position);
Student* deleteElementAtPosition(Student* iStudent, const int position);
Student* destroyList(Student* iStudent);
#endif /* linkedList_hpp */
