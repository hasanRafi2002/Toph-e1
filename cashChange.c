#include <stdio.h>
#include <stdlib.h>

void findMinimumNotes(int N){
    int denomination[] = {500, 100, 50, 10, 5, 1};
    int noteCount = 0, result[10000];
    int i,j;

    for (i = 0; i<6; i++){
        while(N>=denomination[i]){
            N -=denomination[i];
            result[noteCount++] = denomination[i];
        }
    }

    for (i=0; i<noteCount-1; i++){
        for(j=0; j<noteCount-i-1; j++){
            if(result[j]>result[j+1]){
                int temp = result[j];
                result[j] = result[j+1];
                result[j+1] =temp;
            }
        }
    }


    for(i=0; i<noteCount; i++){
        printf("%d ", result[i]);
    }
    printf("\n");
}

int main(){
    int N;
    scanf("%d", &N);
    findMinimumNotes(N);
    return 0;
}