#include <stdio.h>

int main(){
    int X,Y;
    scanf("%d %d", &X, &Y);
    int remainder = Y%X;
    int additionalChocolet = (remainder == 0)? 0:(X-remainder);
    printf("%d\n", additionalChocolet);
    return 0;
}