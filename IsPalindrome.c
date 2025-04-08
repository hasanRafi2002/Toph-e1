#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char s[]){
    int left = 0, right = strlen(s)-1;
    while(left<right){
        if(s[left] != s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main(){
    char s[100];
    scanf("%s", s);
    if(isPalindrome(s)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}