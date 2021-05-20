#include <stdio.h>

int main(){

    int num;
    int temp;
    int count;
    int real[20] = {0}; // 0 ~ 9
    int times;
    int dig_ten;
    int dig_one;    

    scanf("%d",&num);

    dig_one = num%10; // 1의 자리수
    dig_ten = (num%100)/10; // 10의 자리수

    times = num/100; //20

    for ( int i = 1; i<dig_ten; i++)
    {
        for (int j = 0; j<10; j++){

            real[j]+=1;
        }
        real[i+1]+=1;
        real[i-1]+=9;
    }
    for (int i = 1; i<dig_one; i++)
    {
        real[i]++;
    }

    real[0] = num/10;

    for(int i = 1; i<10; i++)
    {
        real[i] = 20 * times + real[i];
    }
    for (int i = 0; i<10; i++)
    {
        printf("%d ",real[i]);
    }
    return 0;
}