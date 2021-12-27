#include <stdio.h>

int main(){
    long long num;
    scanf("%lld", &num);

    int count = 0;
    while(count<200){
        if (num%2==0){
            num /=2;
        }
        else{
            num = 3*num +1;
        }
        printf("%lld      ", num);
        if((count%8==0)&&(count!=0)){
            printf("\n");
        }
        if(num==9663){
            printf("here");
        }
        count ++;
    }
    return 0;
}