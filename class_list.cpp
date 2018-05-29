//
// class_list.cpp
//
// Example class that implements a linked list
// of students
//
// Author: Jason Graalum
//         Portland State University
//
// Date: May 16, 2018
//

class_list::class_list()
{
    this->head = NULL;
}

void add_student(Student * student)
{
    class_list_node * temp = new class_list_node(student);

    if(head == NULL)
        head = temp;
    else if(head && 
            (strcmp(head->student->name, temp->student->name) > 0))
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        class_list_node * current;
        class_list_node * previous;
        previous = head;
        current = head->next;

        while(current && (strcmp(current->student->name, temp->student->name) < 0))
        {
            previous = current;
            current = current->next;
        }

        if(current)
        {
            previous->next = temp;
            temp->next = current;
        }
        else
        {
            previous->next = temp;
        }
    }
}

void add_student_node(class_list_node *)
{

}
void print_list()
{

}







void func1(int array[])
{

    for(int i = 0; i < 10; i++)
    {
        x[i] = i;
    }


}


int x[10];

func1(x);

