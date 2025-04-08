#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int maxVal = 0;

    for(int i=0; i<N; i++){
        int num;
        scanf("%d", &num);
        if(num>maxVal){
            maxVal = num;
        }
    }
    printf("%d\n", maxVal);
    return 0;
}