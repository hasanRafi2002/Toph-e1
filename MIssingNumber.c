#include <stdio.h>

int main(){
    int totalSum, a, b, c;

    scanf("%d", &totalSum);
    scanf("%d %d %d", &a, &b, &c);

    int missingNumber = totalSum - (a+b+c);
    printf("%d\n", missingNumber);

    return 0;
}