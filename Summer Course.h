//
// Created by abdal on 12/14/2023.
//

#ifndef UNTITLED16_SUMMER_COURSE_H
#define UNTITLED16_SUMMER_COURSE_H
#include<iostream>
#include "course.h"
using namespace std;
class SummerCourse: public Course{
public:
    SummerCourse()
    {
        Name="not found";
        Code="not found";
        MinStudentLevel=0;
        CreditHours=0;
    }
    SummerCourse(string n, int msl, int ch) : Course(n, msl, ch) {
        Code = n + "_S"+ to_string(msl);
    }
};
#endif //UNTITLED16_SUMMER_COURSE_H
