// Week 3 project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*uses a linked-list to store values in the queue

has an enqueue method that will appropriately add a value to the back of the queue as an appropriate element

has a dequeue method that will appropriately remove an element from the front of the queue and return its value

Optionally has a peek method that returns the value at the front of the queue without removing it
Bonus if you also create an array based Queue!*/


#include <iostream>
#include "List2.h"

using namespace std;



// constructors.
List::List() {

    head = NULL;
    tail = NULL;
    current = NULL;
    temp = NULL;
}

Test::Test(){}

// Creates a new node and assigns it a value and a spot at the back of the queue.
void List::push(int add_val) {

    node *new_node = new node;

    new_node->next = tail;
    new_node->value = add_val;
    if (head == NULL) {
        new_node->next = NULL;
        head = new_node;
        tail = new_node;
    }
    else {
        
        tail = new_node;
    }
    
   
}
// deletes the eldest node and returns its value.
int List::pop() {
    
    int popped_val = NULL;
    current = tail;
    temp = head;
    popped_val = temp->value;
    // this feels like it would get very slow in the future if a large node was created.
    while (current->next != temp) {

        current = current->next;
    }

    
    free(head);
    head = current;
    head->next = NULL;
    

    cout << "Value popped: " << popped_val << endl;
    cout << "Memory Address freed: " << temp << endl;

    return popped_val;
}

// prints the head and tail of the queue.
void List::peek() {

    cout << "Head value: " << head->value << endl;
    cout << "Tail value: " << tail->value << endl;
}


//prints all node values in the stack.
void List::print_list() {

    current = tail;
    while (current != NULL) {
        cout << current->value << endl;
        current = current->next;
    }

}


void List::menu() {

    cout << "press 0 to quit" << endl;
    cout << "press 1 to push" << endl;
    cout << "press 2 to pop" << endl;
    cout << "press 3 to peek" << endl;

    int menu = 0;
    
    
    bool loop = true;
    while (loop == true) {
        cout << "Enter a number: ";
        cin >> menu;
        if (menu == 1) {
            int node_val;
            cout << "enter an integer value you'd like to store." << endl;
            cin >> node_val;
            push(node_val);
            
        }
        if (menu == 2) {
            pop();
            
        }
        if (menu == 3) {
            peek();
            
        }
        if (menu == 0) {
            loop = false;
        }
    }
}

// ~~~~testing stuff~~~~

//test_1 just shows that the program can work.
void Test::test_1() {

    // populates the stack
    for (int i = 0; i < 10; i++) {
        
        push(i);
    }

    //prints the stacks values
    print_list();

    //prints head and tail
    peek();
    for (int i = 0; i < 10; i++) {
        pop();
    }

    print_list();

}

void Test::test_2() {
    
    for (int i = 0; i < 10; i++) {
        
        push(i);
    }
    // this will break stuff
    for (int i = 0 ; i < 11; i++) {
        pop();
    }

}



int main()
{
    List listy;
    Test testy;
    // Uncomment for to manually use.
    //listy.menu();

    //Testing
    cout << "starting test 1" << endl;
    testy.test_1();

    cout << "starting test 2" << endl;
    testy.test_2();//expected to crash
    

    cout << "Successful Exit.\n";
}


