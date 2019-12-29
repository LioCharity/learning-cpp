//
//  linkedList.cpp
//  learning-cpp
//
//  Created by lionel souop on 25/12/2019.
//  Copyright © 2019 lionel souop. All rights reserved.
//

#include "linkedList.hpp"
#include <iostream>

Student* initializeLinkedList(const std::string iStudentName, const int iStudentAge, const double iStudentGrade){
    Student* aStudent{new(std::nothrow) Student};
    aStudent->age = iStudentAge;
    aStudent->name = iStudentName;
    aStudent->grade = iStudentGrade;
    aStudent->next = nullptr;
    return aStudent;
}

void appendElement(Student* iStrudent, const std::string iStudentName, const int iStudentAge, const double iStudentGrade){
    Student* s{iStrudent};
    while(s){
        if(s->next == nullptr){
            s->next = initializeLinkedList(iStudentName, iStudentAge, iStudentGrade);
            break;
        }
        s = s->next;
    }
}

Student* addElementToHead(Student* iStrudent, const std::string iStudentName, const int iStudentAge, const double iStudentGrade){
    Student* aStudent{initializeLinkedList(iStudentName, iStudentAge, iStudentGrade)};
    aStudent->next = iStrudent;
    return aStudent;
}

Student* addInPosition(Student* iStrudent, const std::string iStudentName, const int iStudentAge, const double iStudentGrade, int position){
    
    if(position == 0)
        return addElementToHead(iStrudent, iStudentName, iStudentAge, iStudentGrade);
    if(position >= listLength(iStrudent))
        throw "Position out of range.";
    
    Student* aStudent{initializeLinkedList(iStudentName, iStudentAge, iStudentGrade)};
    int i{0};
    for(Student* s{iStrudent}; s != nullptr; s = s->next ){
        if(i == (position - 1)){
            Student* next{s->next};
            s->next = aStudent;
            aStudent->next = next;
            break;
        }
    }
    return iStrudent;
}

int listLength(const Student* iStrudent){
    int count{0};
    for(const Student* s{iStrudent}; s != nullptr; s = s->next ){
        ++count;
    }
    return count;
}

Student* getElementAtPosition(Student* iStudent, const int position){
    int actualPosition{0};
    for(Student* s{iStudent}; s != nullptr; s = s->next){
        if(actualPosition == position){
            Student* tmpStudent{copyElement(s)};
            return tmpStudent;
        }
        ++actualPosition;
    }
    return nullptr;
}
Student* copyElement(const Student* iStudent){
    Student* aStudent{new(std::nothrow) Student};
    aStudent->age = iStudent->age;
    aStudent->grade = iStudent->grade;
    aStudent->name = iStudent->name;
    aStudent->next = nullptr;
    return aStudent;
}
Student* deleteElementAtPosition(Student* iStudent, const int position){
    if(position >= listLength(iStudent))
        throw "Position out of range.";
    
    if(position == 0){
        Student* aStudent{iStudent->next};
        delete iStudent;
        iStudent = nullptr;
        return aStudent;
    }
    
    int actualPosition{0};
    for(Student* s{iStudent}; s != nullptr; s = s->next){
        if((actualPosition + 1) == position){
            Student* tmpStudent{s->next};
            s->next = s->next->next;
            delete tmpStudent;
            tmpStudent = nullptr;
        }
        ++actualPosition;
    }
    return iStudent;
}

Student* destroyList(Student* iStudent){
    while(iStudent->next){
        Student* tmpStudent = iStudent->next;
        iStudent->next = iStudent->next->next;
        delete tmpStudent;
        tmpStudent = nullptr;
    }
    
    delete iStudent;
    iStudent = nullptr;
    
    return iStudent;
}

