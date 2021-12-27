#include "stack.h"
#include <stdio.h>

int main(){
    mystack_t* mystack = make_stack();
    while (1){
        char select;
        printf("1. push, 2. pop, 3. peek, 4. clear, 5. end\nYour choice : ");
        scanf(" %c", &select);
        int data;
        switch(select){
            case '1':
                printf("push data : ");
                scanf("%d", &data);
                push(mystack, data);
                break;
            case '2':
                if (pop(mystack, &data)){
                    printf("pop data : %d\n", data);
                }
                else{
                    printf("pop failed.\n");
                    break;
                }
            case '3' :
                if (peek(mystack, &data)){
                    printf("pee data : %d\n", data);
                }
                else{
                    printf("peek failed.\n");
                }
                break;
            case '4' :
                clear_stack(mystack);
                break;
            case '5':
                clear_stack(mystack);
                free(mystack);
                return 0;
            
        }
    }
}