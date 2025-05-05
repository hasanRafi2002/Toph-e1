#include <stdio.h>

int main(){
    int year;
    scanf("%d", &year);
// problem says A leap year occurs when the year is a multiple of 4 but not a multiple of 400.

    if((year%4 == 0 && year%100 != 0) && (year%400 != 0)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}