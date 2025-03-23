#include <stdio.h>
#include <math.h>
#include <float.h>

// Function to calculate the distance between two points
double distance(int x1, int y1, int x2, int y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() {
    int N;

    // Read the number of points
    scanf("%d", &N);

    // Declare an array to store the points (x, y)
    int points[N][2];

    // Read the coordinates of each point
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &points[i][0], &points[i][1]);
    }

    // Initialize the minimum distance to a large value
    double minDist = FLT_MAX;

    // Compare all pairs of points
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            // Calculate the distance between points[i] and points[j]
            double dist = distance(points[i][0], points[i][1], points[j][0], points[j][1]);

            // Update the minimum distance if a smaller distance is found
            if (dist < minDist) {
                minDist = dist;
            }
        }
    }

    // Print the minimum distance with required precision
    printf("%.14f\n", minDist);

    return 0;
}
