#include <stdio.h>
#include <string.h>

char A[1000], B[1000];

int main(){

    scanf("%s %s", A, B);

    int lenA = strlen(A);
    int lenB = strlen(B);

    int a = A[lenA- 1]- '0';
    int b = B[lenB- 1]- '0';

    if((a+b)%2==0){
        printf("Black\n");
    }else{
        printf("White\n");
    }
    return 0;
}