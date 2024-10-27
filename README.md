# Student Course Management System

## Project Overview
This project is a **C++ Student Course Management System** designed to manage student data, course registrations, grades, and expenses. Built using Object-Oriented Programming (OOP) principles, it includes various student types (General and Special Programs) and diverse course types (Normal and Summer Courses). The system efficiently calculates GPA and manages course-related expenses.

## Features
- **Course Registration**: Allows students to register for a maximum of 6 courses.
- **GPA Calculation**: Calculates each student’s GPA based on course grades and credit hours.
- **Expense Calculation**: Differentiates expense calculation for general and special program students.
- **Multiple Course Types**: Supports both Normal and Summer course offerings.
  
## Project Structure
- **Header Files**: Defines core classes like `Student`, `Course`, `NormalCourse`, `SummerCourse`, `GeneralProgramStudent`, and `SpecialProgramStudent`.
- **Main File**: Runs the program, prompts user input, and prints student and course information.
- **Text File (Student Records)**: Contains sample student data in the format of "Name and ID".

## How to Run
1. Compile the program using a C++ compiler.
2. Run the executable and input student details as prompted.

## Sample Text File Format
The text file includes a list of students and their IDs, for example:

## Future Improvements
- Implement file handling to load student data directly from a file.
- Add more complex course management features like prerequisites and course capacity limits.
  
## Data Files
- **student_data.txt**: Contains example student data in the format of "Name and ID" for testing purposes.
