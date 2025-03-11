
#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int prev, current;
    scanf("%d", &prev);

    int isAscending = 1;

    for (int i = 1; i< N; i++){
        scanf("%d", &current);
        if(current<prev){
            isAscending = 0;
        }
        prev = current;
    }
    if(isAscending){
    printf("Yes\n");
    }else{
    printf("No\n");
    }
    return 0;
}