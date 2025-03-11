
#include <stdio.h>

int hasCarry(int A, int B){
    int carry = 0;
    while(A>0 || B>0){
        int sum = (A%10)+ (B%10)+carry;
        if (sum>=10){
            return 1;
        }
        carry = sum/10;
        A/=10;
        B/=10;
    }
    return 0;
}

int main(){
    int A,B;
    scanf("%d %d", &A, &B);
    if(hasCarry(A,B)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}