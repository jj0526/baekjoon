#include <stdio.h>

/*알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 
프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.*/
/*첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.*/
/*첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 
단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.*/
int main(){
    char sen[1000005];
    int count[40];
    int i = 0;
    int k = 0;
    int len = 0;
    

    for (int j = 0; j<40; j++){
        count[j] = 0;
    }

    scanf("%s", sen);

    len = strlen(sen);
    for (int j = 0; j<len; j++){ // don't use strlen(sen) here it requires lots of time.
        count[((int)sen[j]%32)-1]++; // A : count[0]
    }

    int max = count[0];

    for (int j = 0; j<26;j++){ // checking which alphabet has been used the most
        if (max < count[j]){
            max = count[j];
            k = j;
        }
    }
    
    int count2 = 0;

    for (int j = 0; j<26; j++){ // checking how many the max's been used
        if (count[j] == max){
            count2++;
        }
    }
    
    if (count2 >= 2){
        printf("?");
    }
    else{

        printf("%c", toupper(k+65));
    }
    
    return 0;

}