#include <stdio.h>
#include <math.h>

int main() {
    int H, M;
    scanf("%d %d", &H, &M);

    // Step 1: Calculate angles
    double minuteAngle = M * 6.0;               // Each minute moves 6 degrees
    double hourAngle = (H % 12) * 30.0 + M * 0.5; // Each hour moves 30 degrees + extra 0.5 degrees per minute

    // Step 2: Find absolute difference
    double angle = fabs(hourAngle - minuteAngle);

    // Step 3: Get the smaller angle
    angle = fmin(angle, 360.0 - angle);

    // Step 4: Print result with 4 decimal places
    printf("%.4lf\n", angle);

    return 0;
}
