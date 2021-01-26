// Week 3 project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*uses a linked-list to store values in the queue

has an enqueue method that will appropriately add a value to the back of the queue as an appropriate element

has a dequeue method that will appropriately remove an element from the front of the queue and return its value

Optionally has a peek method that returns the value at the front of the queue without removing it
Bonus if you also create an array based Queue!*/

#include <cstdlib>
#include <iostream>
#include "List2.h"

using namespace std;


List::List() {

    head = NULL;
    tail = NULL;
    current = NULL;
    temp = NULL;
}


void List::push(int add_val) {

    struct node* new_node =(node*) malloc(sizeof(struct node));

    new_node->next = head;
    new_node->value = add_val;
    if (head == NULL) {
        new_node->previous = tail;
        tail = new_node;
    }
    else {
        
        head->previous = new_node;
    }
    
    head = new_node;
}

void List::pop() {

    
    temp = head;
    cout << temp->value << endl;
    head = head->next;
    free(temp);
    

}


void List::peek() {

    cout << head->value;
    cout << tail->value;
}

void List::print_list() {

    current = head;
    while (current != NULL) {
        cout << current->value << endl;
        current = current->next;
    }

}




void List::insert(int value, int pos) {
    //probably wont get around to doing this but I'll leave it here just in case.
    int i = 0;
    current = head;
    

}

int main()
{
    int menu = 0;
    cin >> menu;
    struct List link_list;

    if (menu == 1) {
        link_list.push(3);
    }
    if (menu == 2) {
        link_list.pop();
    }
    if (menu == 3) {
        link_list.peek();
    }
    if (menu == 0) {
        return;
    }

    link_list.print_list();

    std::cout << "Hello World!\n";
}

