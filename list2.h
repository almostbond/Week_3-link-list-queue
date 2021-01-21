

struct node {
    int value;
    node* next;
    node* previous;
};






struct List {

    node* head;
    node* tail;
    node* current;
    node* temp;

    List();

    void push(int add_val);
    void insert(int value, int pos);
    void pop();
    void peek();
    void print_list();


};



