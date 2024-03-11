/*원주 위에 N개의 기둥이 있고, 각 기둥에는  0이상  N-1이하의 정수가 하나씩 쓰여 있다. 모든 정수는 정확히 한 번 쓰여 있다. 0<=x<y<N-1인  모든 정수 와 에 대해, 
x가 쓰인 기둥과 y가 쓰인 기둥을 지면과 평행하고 높이 x+y만큼 공중에 떠 있는 막대로 연결하고자 한다. 물론 어떤 두 막대가 겹치면 이렇게
 할 수 없으므로 실제로 막대를 놓기 전에 겹치는 막대가 있는지 알아내야 한다. 기둥은 충분히 높다고 가정하자.
*/
/*첫째 줄에 기둥의 개수 이 주어진다.() 다음 줄에 의 순열이 주어진다.*/
/*겹치는 막대가 있으면 TAK, 없으면 NIE를 출력한다.*/
/*4
0 1 2 3*/
/*NIE*/
/*4
0 1 3 2*/
/*TAK*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    long the_num_of_pillar;

    scanf("%ld", &the_num_of_pillar);

    long *pillar = (long*)malloc(sizeof(long)*the_num_of_pillar);

    for (long i = 0; i<the_num_of_pillar; i++){
        scanf("%ld", &pillar[i]);
    }

    long num = 0;

    for (long i = 0; i<the_num_of_pillar; i++){
        for (long j = i; j<the_num_of_pillar; j++){
            num ++;
        }
    }
    
    long **sum_of_pillar = (long**)malloc(sizeof(long*)*num);

    for (long i = the_num_of_pillar; i>0; i--){
        sum_of_pillar[i] = (long*)malloc(sizeof(long)*the_num_of_pillar);
    }

    for (long i = 0; i<the_num_of_pillar; i++){
        for (long j = 0; j<the_num_of_pillar-i+1; j++){
            sum_of_pillar[i][j] = 0;
        }
    }

    for (long i = 0; i<the_num_of_pillar; i++){
        for (long j = 1; j<the_num_of_pillar-i+1; j++){
            sum_of_pillar[i][j] += pillar[i] + pillar[j];
        }
    }

    int answer = 1;

    for (long i = 0; i<the_num_of_pillar; i++){
        for (long j = 0; j<the_num_of_pillar-i+1; j++){
            for (long k = 0; k<the_num_of_pillar; k++){
                for (long m = 0; m<the_num_of_pillar-k+1; m++){
                    if ((sum_of_pillar[i][j] == sum_of_pillar[k][m])&&((i!=k)||(k!=m))){
                        answer = 0;
                    }
                }
            }
        }
    }

    if (answer == 0){
        printf("TAK");
    }
    else{
        printf("NIE");
    }

    for (long i = the_num_of_pillar; i>0; i--){
        free(sum_of_pillar[i]);
    }

    free(sum_of_pillar);

    return 0;

}