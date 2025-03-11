#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    if(N==1 || N==2){
        printf("1\n");
        return 0;
    }

    long long a =1, b=1, fib;
    for (int i=3; i<=N; i++){
        fib = a+b;
        a=b;
        b=fib;
    }

    printf("%lld\n", fib);
    return 0;
}