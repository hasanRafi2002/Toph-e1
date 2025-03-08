
#include <stdio.h>
#include  <string.h>

void formatNumber(int A){
    char num[12];
    sprintf(num, "%d", A);
    int len = strlen(num);
    int commacount = (len-1)/3;

    char result[12];
    int j = 0, count = 0;

    for (int i = 0; i<len; i++){
        if(i>0&&(len-i)%3 == 0){
            result[j++] = ',';
        }
        result[j++] = num[i];
    }
    result[j] = '\0';
    printf("%s\n", result);
    
}

int	main()
{
int A;
scanf("%d", &A);
formatNumber(A);
return 0;
}
