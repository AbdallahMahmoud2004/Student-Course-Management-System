#include <iostream>
#include "course.h"
#include "NormalCourse.h"
#include "Summer Course.h"
#include "Student.h"
#include "GeneralProgramStudent.h"
#include "SpecialProgramStudent.h"
using namespace std;
Course* COURSES [] = {new NormalCourse("Math", 1, 2),
                      new NormalCourse("Programming_1,", 1, 3),
                      new NormalCourse("Technical_Writing", 1, 3),
                      new NormalCourse("Electronics", 2, 4),
                      new NormalCourse("Data_Structures", 2, 3),
                      new NormalCourse("OOP", 2, 3),
                      new NormalCourse("Algorithms", 3, 2),
                      new NormalCourse("Operating_Systems", 3, 3),
                      new NormalCourse("Databases", 3, 3),
                      new NormalCourse("Machine_Learning", 4, 3),
                      new NormalCourse("Compilers", 4, 4),
                      new NormalCourse("Programming_Concepts", 4, 4),
                      new SummerCourse("Math", 1, 2),
                      new SummerCourse("Compilers", 4, 4),
                      new SummerCourse("Algorithms", 3, 2),
                      new SummerCourse("OOP", 2, 3)
};
Course*  searchCourse(string code){
    int i=0;
    while(true)
    {
        if(COURSES[i]->getcode()==code)
        {
            return COURSES[i];
        }
        i++;
    }
}
int main() {
    int numofstudent;
    cout<<"How many students in the system? "<<endl;
    cin>>numofstudent;
    Student *list[numofstudent];
    for(int i=0;i<numofstudent;i++)
    {
        string name;
        string id;
        int level;
        bool type;
        int numuberofcourses;
        cout<<"Enter student type (0: general, 1: special) : ";
        cin>>type;
        if(type)
        {
            list[i]=new SpecialProgramStudent;
        }
        else
        {
            list[i]=new GeneralProgramStudent;
        }
        cout<<"Enter name : ";
        cin>>name;
        list[i]->setname(name);
        cout<<"Enter ID : ";
        cin>>id;
        list[i]->setid(id);
        cout<<"Enter student level : ";
        cin>>level;
        list[i]->setlevel(level);
        cout<<"Number of courses to be registered : ";
        cin>>numuberofcourses;
        cout<<"Courses to be registered:"<<endl;
        for(int j=0;j<numuberofcourses;j++)
        {
            string fcode;
            double grade;
            do {
                cout << "\tcourse " << j + 1 << " :" << endl;
                cout << "\t\tcode : ";
                cin >> fcode;
            }
            while(!(list[i]->RegisterCourse(searchCourse(fcode)))) ;
                cout << "\t\tGrade: ";
                cin >> grade;
                list[i]->setgrade(grade, j);
        }
        cout<<"============================="<<endl;
    }
    for(int i=0;i<numofstudent;i++)
    {
        cout<<"- student Name : "<<list[i]->getname()<<endl;
        cout<<"- ID : "<<list[i]->getid()<<endl;
        cout<<"- Level : "<<list[i]->getlevel()<<endl;
        cout<<"- Registered Courses : "<<endl;
        for(int j=0;j<list[i]->getnumofcourses();j++)
        {
            cout<<list[i]->getcourse(j);
            cout<<"grade in this course is : "<<list[i]->getgrade(j)<<endl;
            cout<<"=============================================="<<endl;
        }
        cout<<"Overall GPA : "<<list[i]->getTotalGPA()<<endl;
        cout<<"Student Expenses : "<<list[i]->CalculateExpenses()<<endl;
        cout<<"=============================================="<<endl;

    }
    return 0;
}
