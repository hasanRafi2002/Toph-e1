#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

double distance(int x1, int y1, int x2, int y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() {
    int N;
    cin >> N;
    
    vector<pair<int, int> > points(N);
    
    for (int i = 0; i < N; i++) {
        cin >> points[i].first >> points[i].second;
    }
    
    double minDist = 1e9;
    
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            minDist = min(minDist, distance(points[i].first, points[i].second, points[j].first, points[j].second));
        }
    }
    
    cout << fixed << setprecision(10) << minDist << endl;
    
    return 0;
}
    