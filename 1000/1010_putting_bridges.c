/*입력의 첫 줄에는 테스트 케이스의 개수 T가 주어진다. 
그 다음 줄부터 각각의 테스트케이스에 대해 강의 서쪽과 동쪽에 있는 사이트의 개수 정수 N, M (0 < N ≤ M < 30)이 주어진다.
*/

#include <stdio.h>

int main(){
    int t;
    long long n, m;// 3 7
    unsigned long long answer=1;
    scanf("%d", &t);

    for (int i = 0; i<t; i++){
    
        answer = 1;

        scanf("%lld %lld", &n, &m); // n<=m    3   7
        if (n>m-n){
            n = m-n;
        }
        for (long long j = 0; j<n; j++){
            answer = answer * (m-j); //(7-j)
        }
        for (long long j = 0; j<n; j++){
            answer /= (n-j);// (3-j)
        }
        printf("%llu\n", answer);
    }
    return 0;
}