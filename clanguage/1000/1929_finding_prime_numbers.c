/*M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.*/
/*첫째 줄에 자연수 M과 N이 빈 칸을 사이에 두고 주어진다. 
(1 ≤ M ≤ N ≤ 1,000,000) M이상 N이하의 소수가 하나 이상 있는 입력만 주어진다.*/
/*3 16*/
/*3
5
7
11
13*/

#include <stdio.h>
#include <math.h>

int main(){
    int m;
    int n;
    scanf("%d %d", &m, &n);
    int count;

    if (n==2){
        printf("2");
    }
    else if (n==1){
        return 0;
    }
    else{
        for (int i = m; i<=n; i++){
            count = 0;
            for (int j =2; j<=sqrt(i); j++){
                if (i%j == 0){
                    count = 1;
                    break;
                }
            }
            if (i==1){
                count = 1;
            }
            if (count == 0){
                printf("%d\n", i);
            }
        }
    }
    return 0;  
}