#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (){

    char A[20], result[50];
    scanf("%s",A);
    int j = 0;
    result [j++] = toupper(A[0]);

    for (int i =1; A[i] != '\0'; i++){
        if (A[i] == 's'){
            result[j++] = '$';
        }else if (A[i] == 'i'){
            result[j++] = '!';
        }else if (A[i] == 'o'){
            result[j++] = '(';
            result[j++] = ')';
        }else{
            result[j++] = A[i];
        }
    }

    result[j++] = '.';
    result[j] = '\0';

    printf("%s\n", result);
}