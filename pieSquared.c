#include <stdio.h>
#include <math.h>

int main (){
    double r;
    scanf("%lf", &r);
    double area = 3.1416*r*r;
    printf("%.10lf\n", area);

    return 0;
}