//
// student.hpp
//
// Example Class file that uses Linked Lists to store 
// data about students
//
// Author: Jason Graalum
//         Portland State University
//
// Date: May 16, 20181
//

#ifndef Student_hpp
#define Student_hpp
class Student 
{
    private:
        char * name;
        int id;
        char * ssn;
    public:
        Student();
        Student(char *, int, char *);
        char * get_name();
        int get_id();
        char * get_ssn();
};
#endif


