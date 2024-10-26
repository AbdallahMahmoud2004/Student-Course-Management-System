#ifndef UNTITLED16_NORMALCOURSE_H
#define UNTITLED16_NORMALCOURSE_H

#include<iostream>
#include "course.h"

using namespace std;

class NormalCourse : public Course {
public:
    NormalCourse() {
        Name = "not found";
        Code = "not found";
        MinStudentLevel = 0;
        CreditHours = 0;
    }

    NormalCourse(string n, int msl, int ch) : Course(n, msl, ch) {
        Code = n + "_N"+ to_string(msl);
    }
};
#endif
