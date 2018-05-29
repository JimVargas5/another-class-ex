//
// class_list.hpp
//
// Example class that implements a linked list
// of students
//
// Author: Jason Graalum
//         Portland State University
//
// Date: May 16, 2018
//

#include "class_list_node.hpp"

class class_list 
{
    private:
        class_list_node * head;
    public:
        class_list();
        void add_student(Student *);
        void add_student_node(class_list_node *);
        void print_list();
};


