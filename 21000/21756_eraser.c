/*1234567*/
/* 2 4 6*/
/*246*/
/* 4 */
/*4*/

#include <stdio.h>
#include <math.h>

int main(){
    int num;
    scanf("%d", &num);

    int temp = num;
    int count = 0;

    for (int i = 0; i<7; i++){
        temp/=2; // temp 9 4 2 1 
        count++;
        if (temp <1){
            break;
        }
    }
    printf("%d", (int)pow(2,count-1));

    return 0;
}