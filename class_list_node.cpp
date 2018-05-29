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


class_list_node::class_list_node()
{

}

class_list_node::class_list_node(Student * student)
{
    this->student_data = student;
    this->next = NULL;
}

void class_list_node::set_next(class_list_node * next)
{
    this->next = next;
}

class_list_node * class_list_node::get_next()
{
    return this->next;
}

