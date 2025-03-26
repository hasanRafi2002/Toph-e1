#include <stdio.h>
#include <string.h>

int main(){
    char input[101];
    fgets(input, sizeof(input), stdin);

    int count = 0;
    for(int i=0; i<strlen(input); i++){
        if(input[i] == 'X' || input[i] == 'x'){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}