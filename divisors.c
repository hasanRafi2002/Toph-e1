
#include  <stdio.h>

int main(){
    int A;
    scanf("%d", &A);
    for (int i=1; i<=A; i++){
        if(A%i==0){
            printf("%d\n", i);
        }
    }
    return 0;
}