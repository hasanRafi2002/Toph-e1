
#include <stdio.h>
#include <math.h>

int main(){
    int H,M;
    scanf("%d %d", &H, &M);

    double minuteAngle = M*6;
    double hourAngle = (H%12)*30 + (M*.5);

    double angle = fabs(hourAngle - minuteAngle);

    angle = fmin(angle, 360-angle);

    printf("%.4lf\n", angle);

    return 0;

}