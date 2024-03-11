/* It's Independence Day, and Farmer John has taken the cows to the fireworks show. 
Bessie wonders how much of the show the cows will be able to see since they might not 
be able to stay for the entire display.

The show features C (1 ≤ C ≤ 100) fireworks cannons conveniently numbered 1..C. 
Cannon i shoots fireworks every Ti (1 ≤ Ti ≤ N) seconds (all times in this task are integer seconds). 
In a spectacular opening, all cannons first shoot at time 0. Fireworks are visible only during the second in which 
they are launched from the cannon. The cows will stay at the show from time 1 through time N (1 ≤ N ≤ 2,000,000).

Help Bessie figure out how many different times the cows will be able to see fireworks during the time period 
that they are at the show.*/
/** Line 1: Two space-separated integers: C and N.

* Lines 2..C + 1: Line i+1 contains the single integer Ti.
*/
/*2 20
4
6*/
/* 7 */

#include <stdio.h>

int main(){
    long ppl[100][2];

    int num;
    long time;
    scanf("%d %ld", &num, &time);

    for (int i = 0; i<num; i++){
        scanf("%ld", &ppl[i][0]);
    }

    long count = 0;

    for (long i = 1; i<=time; i++){
        for (int j = 0; j<num; j++){
            if (i%(ppl[j][0]) == 0){
                count++;
                break;
            }
        }
    }

    printf("%ld", count);

    return 0;

}