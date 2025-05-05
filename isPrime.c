#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n){
    if (n<=1) return false;
    for (int i =2 ; i*i<n; i++){
    if(n%i == 0) return false;
    }
    return true;
}

int main(){
    int N;
    scanf("%d", &N);

    if(isPrime(N))
    printf("Yes\n");
    else
    printf("No\n");

    return 0;
}