#ifndef UNTITLED16_COURSE_H
#define UNTITLED16_COURSE_H
#include<iostream>
using namespace std;
class Course{
protected:
    string Name;
    string Code;
    int MinStudentLevel;
    int CreditHours;
public:
    Course()
    {
        Name="not found";
        Code="not found";
        MinStudentLevel=0;
        CreditHours=0;
    }
    Course(string n,int msl, int ch)
    {
        Name=n;
        MinStudentLevel=msl;
        CreditHours=ch;
    }
    friend ostream &operator<<( ostream&,const Course&);
    string getname()
    {
        return Name;
    }
    string getcode()
    {
        return Code;
    }
    int getMinStudentLevel()
    {
        return MinStudentLevel;
    }
    int getCreditHours()
    {
        return CreditHours;
    }
};
ostream &operator<<( ostream& os,const Course& obj){
    os<<"Name : "<<obj.Name<<endl;
    os<<"Code: "<<obj.Code<<endl;
    os<<"Level : "<<obj.MinStudentLevel<<endl;
    os<<"Credit Hours : "<<obj.CreditHours<<endl;
    return os;
}
#endif //UNTITLED16_COURSE_H
