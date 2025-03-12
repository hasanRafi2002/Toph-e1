#include <stdio.h>
#include <string.h>

int main(){
    int T;
    scanf("%d", &T);

    while(T--){
        char S[101];
        scanf("%s",S);

        int legalBalls = 0;

        for (int i =0; S[i] != '\0'; i++){
            if((S[i]>='0' && S[i]<='6') || S[i] == 'O'){
                legalBalls++;
            }
        }

        int overs = legalBalls/6;
        int balls = legalBalls%6;

        if(overs>0){
            printf("%d OVER", overs);
            if(overs>1) printf("S");
        }
        if(balls>0){
            if(overs>0) printf(" ");
            printf("%d BALL", balls);
            if(balls>1) printf("S");
        }
        printf("\n");
    }
    return 0;
}