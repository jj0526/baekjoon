/*요세푸스 문제는 다음과 같다.

1번부터 N번까지 N명의 사람이 원을 이루면서 앉아있고, 양의 정수 K(≤ N)가 주어진다. 이제 순서대로 K번째 사람을 제거한다.
 한 사람이 제거되면 남은 사람들로 이루어진 원을 따라 이 과정을 계속해 나간다. 이 과정은 N명의 사람이 모두 제거될 때까지 계속된다. 
 원에서 사람들이 제거되는 순서를 (N, K)-요세푸스 순열이라고 한다. 예를 들어 (7, 3)-요세푸스 순열은 <3, 6, 2, 7, 5, 1, 4>이다.

N과 K가 주어지면 (N, K)-요세푸스 순열을 구하는 프로그램을 작성하시오.*/
//첫째 줄에 N과 K가 빈 칸을 사이에 두고 순서대로 주어진다. (1 ≤ K ≤ N ≤ 5,000)
//7 3             <3, 6, 2, 7, 5, 1, 4>

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,k; // 7 3

    int count = 0;
    int current = 0;
    int cnt_of_answer = 0;
    int first = 0;
    int check_first = 0;

    scanf("%d %d", &n, &k);

    int *arr = (int*)malloc(n*sizeof(int)+1);

    for (int i = 0; i<=n; i++){
        arr[i] = i;
    }
    printf("<");
    while(1){
        if (k==1){
            for (int i = 1; i<n; i++){
                printf("%d, ", i);
            }
            printf("%d>", n);
            break;
        }
        if(count==k-1){
            arr[current] = 0;
            count = 0;
            cnt_of_answer++;
            if(cnt_of_answer>n-1){
                printf("%d>", current);
                break;
            }
            else{
                printf("%d, ", current);
            }
        }
        current++;
        while(1){
            if (current>n){
                current = first;
            }
            
            if (arr[current]!=0){
                count++;
                current++;
            }
            else{
                current++;
            }
            if (current>n){
                current = 0;
            }
            if(count==k-1){
                while(1){
                    if (current>n){
                        current = 1;
                        check_first = 1;
                    }
                    
                    if (arr[current]==0){
                        current++;
                    }
                    else{
                        if (check_first==1){
                            first = current;
                        }
                        //printf("★arr[current] : %d\n", arr[current]);
                        break;
                    }
                }
                //printf("second count : %d current : %d arr[current] = %d\n", count, current, arr[current]);
                //printf("break\n");

                break;
            }
            //printf("current : %d\n", current);
        }
        //printf("cnt_of_answer : %d\n", cnt_of_answer);
    
    }
    return 0;
}
