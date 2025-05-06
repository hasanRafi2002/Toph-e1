#include <stdio.h>

int main(){
    int N,A,B;
    scanf("%d %d %d", &N, &A, &B);

    int arr[100];

    for (int i =0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for(int i = A; i<=B; i++){
        sum += arr[i];
    }

    printf("%d\n", sum);

    return 0;
}