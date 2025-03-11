
#include <stdio.h>

long long factorial(int n){
    long long result = 1;
    for (int i =2; i<=n; i++){
        result *= i;
        result %= 10000;
    }
    return result;
}

int main (){
    int N;
    scanf("%d",&N);

    long long fact = factorial(N);

    if(fact == 0){
        printf("0000\n");
    }else{
        printf("%d\n",fact);
    }
    return 0;
} 