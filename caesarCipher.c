
# include <stdio.h>
# include <string.h>

void caesarCipher(char message[], int shift){
    for (int i =0; message[i] != '\0'; i++){
        char c = message[i];

        if(c>='a' && c<= 'z'){
            message[i] = (c-'a' - shift + 26)%26 +'a';
        }else if(c>='A' && c<='Z'){
            message[i] = (c-'A'-shift+26)%26+'A';
        }
    }
}

int main(){
    int N;
    char message[101];

    scanf("%d", &N);
    getchar();
    fgets(message, sizeof(message), stdin);

    int len = strlen(message);
    if(message[len-1] == '\n'){
        message[len-1] = '\0';
    }
    caesarCipher(message,N);
    printf("%s\n",message);
    return 0;
}


