#include <stdio.h>

/*평소 반상회에 참석하는 것을 좋아하는 주희는 이번 기회에 부녀회장이 되고 싶어 
각 층의 사람들을 불러 모아 반상회를 주최하려고 한다.

이 아파트에 거주를 하려면 조건이 있는데, “a층의 b호에 살려면 자신의 아래(a-1)층의 
1호부터 b호까지 사람들의 수의 합만큼 사람들을 데려와 살아야 한다” 는 계약 조항을 꼭 지키고 들어와야 한다.

아파트에 비어있는 집은 없고 모든 거주민들이 이 계약 조건을 지키고 왔다고 가정했을 때, 
주어지는 양의 정수 k와 n에 대해 k층에 n호에는 몇 명이 살고 있는지 출력하라. 
단, 아파트에는 0층부터 있고 각층에는 1호부터 있으며, 0층의 i호에는 i명이 산다.*/
/*첫 번째 줄에 Test case의 수 T가 주어진다. 그리고 각각의 케이스마다 입력으로 
첫 번째 줄에 정수 k, 두 번째 줄에 정수 n이 주어진다*/
/*각각의 Test case에 대해서 해당 집에 거주민 수를 출력하라.*/
/*1 ≤ k, n ≤ 14*/
/*2
1
3
2
3*/
/*6
10*/

int main(){
    int people[100][20]; // people[k][n]  k: floor  n : room number
    int user[3][100];
    int num; // how many times the user input numbers

    for (int i = 0; i<100; i++){
        for (int k = 1; k<=15; k++){
            people[i][k] = 0;
        }
    }

    scanf("%d", &num);

    for (int i = 0; i<num; i++){
        scanf("%d", &user[0][i]); // user[0][i] : k (floor)
        scanf("%d", &user[1][i]); // user[1][i] : n (room number)
    }

    int max;
    int max2;

    max = user[0][0];
    max2 = user[1][0];

    for (int i = 0; i<num; i++){
        if (max < user[0][i]){
            max = user[0][i];
        }
        if (max2 < user[1][i]){
            max2 = user[1][i];
        }
    }/* people[max][something] (floor), people[something][max2] (room number) lets say max is (7 2), max2 is (3 4).
    make it 7*4     */

    for (int n = 1; n<=15; n++){
        people[0][n] = n; // initializing how many people live in 0th floor n th room
    }
    int k;
    int n;

    for (k = 1; k<=max; k++){ // floor
        for (n = 1; n<=max2; n++){ // room number
            for (int l = 1; l<=n; l++){
                people[k][n] = people[k][n] + people[k-1][l];
            }
        }
    }

    

    for (int i = 0; i<num; i++){
        printf("%d\n", people[user[0][i]][user[1][i]]);
    }

    return 0;

}