//
// Created by abdal on 12/14/2023.
//

#ifndef UNTITLED16_SPECIALPROGRAMSTUDENT_H
#define UNTITLED16_SPECIALPROGRAMSTUDENT_H
#include <iostream>
#include "Student.h"
using namespace std;
class SpecialProgramStudent:public Student{
public:
    bool RegisterCourse(Course* c)
    {
        if(noOfCourses<6)
        {
            array[noOfCourses]=c;
            noOfCourses++;
            cout<<"course is registered successfully "<<endl;
            return true;
        }
        else
        {
            cout<<"invalid operation,"<<endl<<"You have already registered 6 courses"<<endl;
            return false;
        }
    }
    float CalculateExpenses(){
        int Sumofcredithours=0;
        for(int i=0;i<noOfCourses;i++)
        {
            Sumofcredithours+=array[i]->getCreditHours();
        }
        return Sumofcredithours*500;
    }
};
#endif //UNTITLED16_SPECIALPROGRAMSTUDENT_H
