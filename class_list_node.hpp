//
// class_list_node.cpp
//
// Example program that uses Linked Lists to stored 
// data about students
//
// Author: Jason Graalum
//         Portland State University
//
// Date: May 16, 2018
//


class class_list_node
{
    private:
    public:
        Student * student_data;
        class_list_node * next;

        class_list_node * get_next();
        void set_next(class_list_node *);

        class_list_node();
        class_list_node(Student *)
};

