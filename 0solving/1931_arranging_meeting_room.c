#include <stdio.h>

int main(){
    long num;
    scanf("%ld", &num);

    long meeting_room[10000][2];

    for (long i = 0; i<num; i++){
        scanf("%ld %ld",&meeting_room[i][0] , &meeting_room[i][1]);
    }
    
    printf("done\n");

    long smallest;
    long temp[2]; // temp[0] = meeting_room[i][0]    temp[1] = meeting_room[i][1];
    long index_smallest;

    for (long i = 0; i<num; i++){
        smallest = meeting_room[i][0];
        for(long j = i; j<num; j++){
            if (smallest > meeting_room[j][0]){
                smallest = meeting_room[j][0];
                index_smallest = j;
            }
        }
        temp[0] = meeting_room[i][0];
        temp[1] = meeting_room[i][1];
        meeting_room[i][0] = meeting_room[index_smallest][0];
        meeting_room[i][1] = meeting_room[index_smallest][1];
        meeting_room[i][0] = temp[0];
        meeting_room[i][1] = temp[1];
        printf("index : %ld smallest : %ld\n",index_smallest, smallest);
    }

    printf("★\n");
    for (int i = 0; i<11;i++){
        printf("%ld %ld\n", meeting_room[i][0], meeting_room[i][1]);
    }
    return 0;
}