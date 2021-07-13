/*정수 A를 B로 바꾸려고 한다. 가능한 연산은 다음과 같은 두 가지이다.

2를 곱한다.
1을 수의 가장 오른쪽에 추가한다. 
A를 B로 바꾸는데 필요한 연산의 최솟값을 구해보자.*/
/*
첫째 줄에 A, B (1 ≤ A < B ≤ 109)가 주어진다.*/
/*A를 B로 바꾸는데 필요한 연산의 최솟값에 1을 더한 값을 출력한다. 만들 수 없는 경우에는 -1을 출력한다.*/
/*2 162*//*5*/ //2 → 4 → 8 → 81 → 162
//100 40021      //5    //100 → 200 → 2001 → 4002 → 40021

int main(){
    long the_num1;
    long the_num2;
    
    scanf("%ld %ld", &the_num1, &the_num2);
    long temp1 = the_num1;
    long temp2 = the_num2;

    int count1 = 1; // digits of the_num1

    for (int i = 0; i<10; i++){
        if (temp1/10>0){
            count1++;
        }
        else{
            break;
        }
    }
    int num1[10];
    int num2[10];

    int count2 = 1;

    for (int i = 0; i<10; i++){
        if (temp2/10>0){
            count2++;
        }
        else{
            break;
        }
    }
    long temp1 = the_num1;
    long temp2 = the_num2;

    for (int i = 0; i<count1; i++){
        num1[i] = temp1 % 10; //num1[0] = first digit
        temp1 /=10;
    }
    for (int i = 0; i<count1; i++){
        num2[i] = temp2 % 10;
        temp2 /= 10;
    }

    long temp1 = the_num1;
    long temp2 = the_num2;

    int binary_count1 = 1;

    for (binary_count1 = 0; binary_count1<32; binary_count1++){
        if (temp1/2 <0){
            break;
        }
        temp1 /= 2;
    }

    int binary_count2 = 1;

    for (binary_count2 = 0; binary_count2<32; binary_count2++){
        if (temp2/2 <0){
            break;
        }
        temp2 /= 2;
    }

    for (int i = 0; i<binary_count1; i++){
        
    }

}