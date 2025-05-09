#include <stdio.h>

int main(){
    char s[26];
    scanf("%s", s);
    int balance = 0;

    for (int i=0; s[i] != '\0'; i++){
        if(s[i] == '('){
            balance++;
        }else if(s[i] == ')'){
            balance--;
            if(balance<0){
                printf("No\n");
                return 0;
            }
        }
    
}
if(balance == 0){
    printf("Yes\n");
}else{
    printf("No\n");
}

return 0;
}