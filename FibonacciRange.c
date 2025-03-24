#include <stdio.h>

void printFibonacciInRange(int L, int R){
    int a=0, b=1, next;
    int printedOne = 0;

    if(a>=L) printf("%d\n", a);

    if(b>=L && b<=R){
    printf("%d\n", b);
    printedOne = 1;
    }

    next = a+b;
    while(next<=R){
        if(next>=L){
            if(next==1 && printedOne){
                a=b;
                b=next;
                next=a+b;
                continue;
            }
            printf("%d\n", next);
        }
        a=b;
        b=next;
        next=a+b;
    }
}

int main(){
    int L,R;
    scanf("%d %d", &L, &R);
    printFibonacciInRange(L,R);
    return 0;
}