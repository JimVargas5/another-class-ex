//
// student.cpp
//
// Example Class file that uses Linked Lists to store 
// data about students
//
// Author: Jason Graalum
//         Portland State University
//
// Date: May 16, 20181
//

#include <iostream>
#include "student.hpp"

Student::Student()
{

}

Student::Student(char * n, int i, char * s)
{
    this->name = new char[strlen(n)+1];
    this->id = i;
    this->ssn = new char[strlen(s)+1];
    strcpy(this->name, n);
    strcpy(this->ssn, s);
}

char * Student::get_name()
{
    return this->name;
}

int Student::get_id()
{
    return this->id;
}
char * Student::get_ssn()
{
    return this->ssn;
}
