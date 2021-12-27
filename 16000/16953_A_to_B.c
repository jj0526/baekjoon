/*정수 A를 B로 바꾸려고 한다. 가능한 연산은 다음과 같은 두 가지이다.

2를 곱한다.
1을 수의 가장 오른쪽에 추가한다. 
A를 B로 바꾸는데 필요한 연산의 최솟값을 구해보자.*/
/*
첫째 줄에 A, B (1 ≤ A < B ≤ 10^9)가 주어진다.*/
/*A를 B로 바꾸는데 필요한 연산의 최솟값에 1을 더한 값을 출력한다. 만들 수 없는 경우에는 -1을 출력한다.*/
/*2 162*//*5*/ //2 → 4 → 8 → 81 → 162
//100 40021      //5    //100 → 200 → 2001 → 4002 → 40021

#include <stdio.h>

int main(){
    long the_num1;
    long the_num2;
    
    scanf("%ld %ld", &the_num1, &the_num2);
    long temp = the_num2;
    int count = 1;

    int digit = 1;
    for (int i = 0; i<10; i++){
        if (temp/10 > 0){
            digit++;
        }
        temp /=10;
        if (temp == 0){
            break;
        }
    }

    temp = the_num2;

    for (int i = 0; i<32; i++){
        if (temp%10==1){
            temp = temp/10;
            if (the_num1 == temp){
                break;
            }
        }
        else if (temp%2 == 1){
            printf("%d", -1);
            return 0;
        }
        else{
            temp /= 2;
            if (the_num1 == temp){
                break;
            }
        }
        count++;
        if(temp == 0){
            printf("%d", -1);
            return 0;
        }
    }

    printf("%d", count+1);

    return 0;
}