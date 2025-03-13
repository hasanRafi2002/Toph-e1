#include <stdio.h>
#include <string.h>

int main(){
    char N[10001];
    int freq[10] = {0};

    scanf("%s", N);

    for(int i = 0; N[i] != '\0'; i++){
        freq[N[i] - '0']++;
    }

    int maxFreq = 0, resultDigit = 0;
    for (int i =0; i<10; i++){
        if(freq[i]>maxFreq){
            maxFreq = freq[i];
            resultDigit = i;
        }
    }
    printf("%d\n", resultDigit);
    return 0;
}