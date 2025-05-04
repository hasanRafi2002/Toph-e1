#include <stdio.h>

int main(){
    int N, count = 0;
    scanf("%d", &N);

    for (int i =1; i<=N/2; i++){
        if(N%i ==0 ){
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}