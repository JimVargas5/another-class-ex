//
// student_main.cpp
//
// Example program that uses Linked Lists to store 
// data about students
//
// Author: Jason Graalum
//         Portland State University
// Date: May 16, 2018
//

#include <iostream>

#include "student.hpp"

using namespace std;

#define MAX_NAME_LEN 128
#define SSN_LEN 13

int main()
{
    char name[MAX_NAME_LEN];
    int id;
    char ssn[SSN_LEN];

    class_list list1;

    do {
        cout << "Enter student information." << endl;

        cout << "Student ID(-1 to quit): ";
        cin >> id;
        cin.ignore();

        if(id > 0) 
        {
            cout << "Student Name: "; 
            cin.get(name, MAX_NAME_LEN, '\n'); 
            cin.ignore();

            cout << "Student SSN: "; 
            cin.get(ssn, SSN_LEN, '\n'); 
            cin.ignore();

            Student * new_student =  new Student(name, id, ssn);
            list1.add_student(new_student);
        }

        // Need to add the student to the linked list here
        // Add in order of ID <- easier to search this way

    } while(id > 0);

    // Do something useful with the linked list
    //
    // Print the out the list
    list1.print_list();

    //
    // Remove a student by id
    //
    // Add a new student

}
