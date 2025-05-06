#include <stdio.h>
#include <math.h>

int main(){
    int N;
    scanf("%d", &N);

    int sum = pow(2,N-1);
    printf("%d\n", sum);
    return 0;
}