#include "stack.h"
#include <stdlib.h>

mystack_t* make_stack()
{
    mystack_t* retval = (mystack_t*)malloc(sizeof(mystack_t));
    retval->top = NULL;
    return retval;
}
node_t* make_node(int data, node_t* next)
{
    node_t* retval = (node_t*)malloc(sizeof(node_t));
    retval->data = data;
    retval->next = next;
    return retval;
}
int push(mystack_t* target, int data)//return : success or not.
{
    if(target == NULL)
        return 0;
    target->top = make_node(data, target->top);
    return 1;
}
int pop(mystack_t* target, int *data){
    if (target == NULL){
        return 0;
    }
    if (target -> top == NULL){
        return 0;
    }
    *data = target -> top -> data;
    node_t* temp = target -> top;
    target -> top = target -> top -> next;
    free(temp);
    return 1;
}
int peek(mystack_t* target, int* data){
    if (target == NULL){
        return 0;
    }
    if (target -> top == NULL){
        return 0;
    }
    *data = target -> top -> data;
    return 1;
}
int clear_stack(mystack_t* target){
    if (target == NULL){
        return 0;
    }
    while(target -> top != NULL){
    
        node_t* temp = target -> top;
        target -> top = target -> top -> next;
        free(temp);
    }
    
}