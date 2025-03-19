#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;

// Function to calculate Euclidean distance
double distance(pair<int, int> p1, pair<int, int> p2) {
    return sqrt(pow(p2.first - p1.first, 2) + pow(p2.second - p1.second, 2));
}

int main() {
    int N;
    cin >> N;
    
    vector<pair<int, int>> points(N);
    
    for (int i = 0; i < N; i++) {
        cin >> points[i].first >> points[i].second;
    }

    double minDist = numeric_limits<double>::max();
    
    // Brute-force approach to check all pairs
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            double dist = distance(points[i], points[j]);
            if (dist < minDist) {
                minDist = dist;
            }
        }
    }

    // Print result with precision
    printf("%.6lf\n", minDist);

    return 0;
}
