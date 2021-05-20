#include <stdio.h>

int main(){
    char sen[1000005];
    int count = 0;

    int i = 0;

    scanf("%[^\n]", sen);

    for (int i = 1; i<strlen(sen)-1; i++){
        if(sen[i] == ' '){
            count++;
        }
        else if (sen[i] == NULL){
            break;
        }
    }
    if ((strlen(sen) == 1)&&sen[0] == ' '){
        printf("0");
    }
    else{
        printf("%d", count+1);
    }
}