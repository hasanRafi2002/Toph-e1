#include <stdio.h>
#include <string.h>

#define MAX_N 20
#define MAX_LEN 20

void makeEvenBaaaa(char *s){
    int len = strlen(s);
    int a_count = len-1;


    if (a_count %2 != 0){
        if (a_count == 1){
            strcat(s, "a");
        }else{
            s[len-1] = '\0';
        }
    }
}


int main (){
    int N;
    scanf("%d", &N);
    getchar();

    char lines[MAX_N][MAX_LEN + 1];
    int max_length = 0;


    for (int i =0; i<N; i++){
        fgets(lines[i], MAX_LEN+1, stdin);
        lines[i][strcspn(lines[i], "\n")] = '\0';
        makeEvenBaaaa(lines[i]);
        int len = strlen(lines[i]);
        if(len>max_length) max_length = len;
    }

    for (int i =0; i<N; i++){
        int spaces = (max_length - strlen(lines[i]))/2;
        for(int j=0; j<spaces; j++){
            printf(" ");
        }
        printf("%s\n", lines[i]);
    }
    return 0;
}