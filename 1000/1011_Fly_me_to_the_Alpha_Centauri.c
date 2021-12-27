/*우현이는 어린 시절, 지구 외의 다른 행성에서도 인류들이 살아갈 수 있는 미래가 오리라 믿었다. 
그리고 그가 지구라는 세상에 발을 내려 놓은 지 23년이 지난 지금, 세계 최연소 ASNA 우주 비행사가 되어 
새로운 세계에 발을 내려 놓는 영광의 순간을 기다리고 있다.

그가 탑승하게 될 우주선은 Alpha Centauri라는 새로운 인류의 보금자리를 개척하기 위한 대규모 생활 유지 
시스템을 탑재하고 있기 때문에, 그 크기와 질량이 엄청난 이유로 최신기술력을 총 동원하여 개발한 공간이동 
장치를 탑재하였다. 하지만 이 공간이동 장치는 이동 거리를 급격하게 늘릴 경우 기계에 심각한 결함이 발생하는 단점이 있어서,
이전 작동시기에 k광년을 이동하였을 때는 k-1 , k 혹은 k+1 광년만을 다시 이동할 수 있다. 예를 들어, 이 장치를 처음 
작동시킬 경우 -1 , 0 , 1 광년을 이론상 이동할 수 있으나 사실상 음수 혹은 0 거리만큼의 이동은 의미가 없으므로 1 광년을 
이동할 수 있으며, 그 다음에는 0 , 1 , 2 광년을 이동할 수 있는 것이다. 
( 여기서 다시 2광년을 이동한다면 다음 시기엔 1, 2, 3 광년을 이동할 수 있다. )
*/
/*
3
0 3
1 5
45 50
*/
/*
3           1 1 1
3           1 2 1
4           1 2 1 1
*/

/*
1~4 : 3
5-6 : 4
7-9 : 5
10-12 : 6
13-16 : 7
17-
*/

#include <stdio.h>
#include <math.h>
#define MAX pow(2, 16)

int main(){
    int times;
    scanf("%d", &times);
    unsigned long long x, y;

    
    for (int j = 0; j<times; j++){
        
        scanf("%llu %llu", &x, &y);

        unsigned long long distance = y-x;

        for (long long i = 0; i<MAX; i++){
            if (distance==2){
                printf("%d\n", 2);
                break;
            }
            if (i*(i+1)>=distance){
                //printf("i : %d\n", i);
                if(i*i>=distance){
                    printf("%lld\n", 2*i-1);
                }
                else{
                    printf("%lld\n", 2*i);
                }
                break;
            }
        }
    }
    return 0;

}