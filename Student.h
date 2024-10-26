//
// Created by abdal on 12/14/2023.
//

#ifndef UNTITLED16_STUDENT_H
#define UNTITLED16_STUDENT_H
#include <iostream>
#include "course.h"

using namespace std;
class Student
{
protected:
    string name;
    string id;
    Course *array[6];
    int noOfCourses;
    int level;
    double grades[6];
public:
    Student(){
        for(int i=0;i<6;i++){
            array[i]= nullptr;
        }
        noOfCourses=0;
    }
    void printRegisteredCourses(){
        for(int i=0;i<6;i++)
        {
            cout<<*array[i];
            cout<<"Student's Grade in "<<array[i]->getname()<<" course is "<<grades[i];
        }
    }
    virtual float CalculateExpenses()=0;
    virtual bool RegisterCourse(Course* c)
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
    double getTotalGPA(){
        double num=0;
        int sumofcredithours=0;
        for(int i=0;i<noOfCourses;i++)
        {
            num+=array[i]->getCreditHours()* getCourseGPA(grades[i]);
            sumofcredithours+=array[i]->getCreditHours();
        }
        double TotalGPA=num/sumofcredithours;
        return TotalGPA;
    }
    double getCourseGPA(double g)
    {
        if(g>92)
            return 4.00;
        else if(g>89)
            return 3.70;
        else if(g>86)
            return 3.30;
        else if(g>82)
            return 3.00;
        else if(g>79)
            return 2.70;
        else if(g>76)
            return 2.30;
        else if(g>72)
            return 2.00;
        else if(g>69)
            return 1.70;
        else if(g>66)
            return 1.30;
        else if(g>62)
            return 1.00;
        else if(g>60)
            return 0.70;
        else
            return 0.00;
    }
    void setname(string n)
    {
        name=n;
    }
    void setid(string i)
    {
        id=i;
    }
    void setlevel(int l)
    {
        level=l;
    }
    void setgrade(double g,int index)
    {
        grades[index]=g;
    }
    int getnumofcourses()
    {
        return noOfCourses;
    }
    string getname()
    {
        return name;
    }
    string getid()
    {
        return id;
    }
    int getlevel()
    {
        return level;
    }
    Course getcourse(int index)
    {
        return *array[index];
    }
    double getgrade(int index)
    {
        return grades[index];
    }
};
#endif //UNTITLED16_STUDENT_H
