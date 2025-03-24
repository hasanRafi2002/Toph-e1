#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isUppercase(char *word){
    for (int i=0; word[i] != '\0'; i++){
        if(!isupper(word[i])){
            return 0;
        }
    }
    return 1;
}

int main(){
    char line[101];
    char word[101];
    char result[1010] = "";

    fgets(line, sizeof(line), stdin);

    int resultLen = 0;

    int i =0;

    while(sscanf(line+i, "%s", word) == 1){
        if(!isUppercase(word)){
            if(resultLen>0){
                result[resultLen++] = ' ';
            }
            int j =0;
            while (word[j] != '\0'){
                result[resultLen++] = word[j++];
            }
        }
        while (line[i] != ' ' && line[i] != '\0'){
            i++;
        }
        if(line[i] != '\0'){
            i++;
        }
    }
    result[resultLen] = '\0';

    printf("%s\n", result);

    return 0;
}