//
// Created by abdal on 12/14/2023.
//

#ifndef UNTITLED16_GENERALPROGRAMSTUDENT_H
#define UNTITLED16_GENERALPROGRAMSTUDENT_H
#include <iostream>
#include "Student.h"
using namespace std;
class GeneralProgramStudent:public Student{
public:
    virtual bool RegisterCourse(Course* c)
    {
        if(noOfCourses<6 && (level >= c->getMinStudentLevel()))
        {
            array[noOfCourses]=c;
            noOfCourses++;
            cout<<"course is registered successfully "<<endl;
            return true;
        }
        else
        {
            cout<<"invalid operation"<<endl;
            return false;
        }
    }
    float CalculateExpenses(){
        return level*1000;
    }
};
#endif //UNTITLED16_GENERALPROGRAMSTUDENT_H
