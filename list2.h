



class List {

    private:
        struct node {
            int value;
            node* next;

        };

        typedef struct node* nodeptr;

        nodeptr head;
        nodeptr tail;
        nodeptr current;
        nodeptr temp;

    public:
        List();

        void push(int add_val);
    
        int pop();
        void peek();
        void print_list();
        void menu();


};


class Test: public List{

    public:
        Test();

        void test_1();
        void test_2();
        //void test_3();

};


