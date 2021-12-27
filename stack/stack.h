#ifndef STACK_H
#define STACK_H
//simple stack node
struct node
{
    int data; //change it to template when using C++.
    struct node* next;//pointer to next node.
};
//simple stack
struct stack
{
    //only has top.
    struct node* top;
};
typedef struct stack mystack_t; //for ease.
typedef struct node node_t;

//function protypes
mystack_t* make_stack();
node_t* make_node(int data, node_t* next);
int push(mystack_t* target, int data);//return : success or not.
int pop(mystack_t* target, int* data);
int peek(mystack_t* target, int* data);
int clear_stack(mystack_t* target);

#endif