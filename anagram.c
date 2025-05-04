#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char A[100], B[100];
    int freqA[26] ={0}, freqB[26] = {0};

    scanf("%s", A);
    scanf("%s", B);

    if(strlen(A) != strlen(B)){
        printf("No\n");
        return 0;
    }

    for (int i =0; A[i] != '\0'; i++){
        freqA[tolower(A[i]) - 'a']++;
        freqB[tolower(B[i]) - 'a']++;
    }

    for (int i = 0; i<26; i++){
        if(freqA[i] != freqB[i]){
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");
    return 0;
}