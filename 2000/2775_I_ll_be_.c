#include <stdio.h>

int main(){
    int people[100][20]; // people[k][n]  k: floor  n : room number
    int user[3][100];
    int num; // how many times the user input numbers

    for (int i = 0; i<100; i++){
        for (int k = 1; k<=15; k++){
            people[i][k] = 0;
        }
    }
    for (int n = 1; n<=15; n++){
        people[0][n] = n; // initializing how many people live in 0th floor n th room
    }

    int k;
    int n;

    for (k = 1; k<15; k++){ // floor
        for (n = 1; n<15; n++){ // room number
            for (int l = 1; l<=n; l++){
                people[k][n] = people[k][n] + people[k-1][l];
            }
        }
    }

    int a, b;

    scanf("%d", &num);

    for (int i = 0; i<num; i++){

        scanf("%d", &a); // a : k (floor)
        scanf("%d", &b); // b : n (room number)

        printf("%d\n", people[a][b]);
    }

    return 0;

}