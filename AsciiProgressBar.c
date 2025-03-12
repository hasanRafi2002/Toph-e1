#include <stdio.h>
#include <math.h>

int main (){
    double P;
    scanf("%lf", &P);
    int percentage = (int)P;
    int progress = percentage/10;
    printf("[");
    for( int i = 0; i< progress; i++) printf("+");
    for(int i = progress; i<10; i++) printf(".");
    printf("] %d%%\n", percentage);
    return 0;
}