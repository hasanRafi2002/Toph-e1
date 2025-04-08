#include <stdio.h>

int main(){
    int N,D;

    scanf("%d %d", &N,&D);
    int whole = N/D;
    int remainder = N%D;
    printf("%d %d %d\n", whole, remainder, D);
    return 0;
}