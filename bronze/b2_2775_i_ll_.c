#include <stdio.h>

// 70 =

int main{
    int people[50][15]; // people[k][n]  k: floor  n : room number
    int user[3][100];
    int num; // how many times the user input numbers
    int answer[50];

    scanf("%d", &num);
    for (int i = 0; i<num; i++){
        scanf("%d", &user[0][i]); // user[0][i] : k (floor)
        scanf("%d", &user[1][i]); // user[1][i] : n (room number)
    }

    for (int i = 0; i<num; i++){
        answer[i] = 0;
    }



}