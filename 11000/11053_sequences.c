/*수열 A가 주어졌을 때, 가장 긴 증가하는 부분 수열을 구하는 프로그램을 작성하시오.

예를 들어, 수열 A = {10, 20, 10, 30, 20, 50} 인 경우에 가장 긴 증가하는 부분 수열은 
A = {10, 20, 10, 30, 20, 50} 이고, 길이는 4이다.*/

/*첫째 줄에 수열 A의 크기 N (1 ≤ N ≤ 1,000)이 주어진다.

둘째 줄에는 수열 A를 이루고 있는 Ai가 주어진다. (1 ≤ Ai ≤ 1,000)*/

/*6
10 20 10 30 20 50*/
/*4*/

#include <stdio.h>

int main(){
    int many;
    scanf("%d", &many);

    int *num;
    num = (int*)(malloc(sizeof(int)*many));

    for (int i = 0; i<num; i++){
        scanf("%d", &num[i]);
    }
    
    int first;
    int diff;
    int *count;
    count = (int*)(malloc(sizeof(int)*many));
    for (int i = 0; i<many; i++){
        count[i] = 0;
    }

    for (int i = 0; i<num-1; i++){
        first = num[i];
        diff = num[i+1] - num[i];
        for (int j = i+1; j<num; j++){
            if (num[j]-num[j-1] == diff){
                count[i]++;
            }
        }
    }
    int max = count[0];
    int re;
    for (int i = 0; i<many; i++){
        if (count[i] > max){
            max = count[i];
            re = i;
        }
    }
    printf("%d", count[re]);

}