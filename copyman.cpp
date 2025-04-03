#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;  // Read the number of elements

    int maxVal = 0;  // Initialize max with the lowest possible value

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        if (num > maxVal) {
            maxVal = num;  // Update max if the current number is greater
        }
    }

    cout << maxVal << endl;  // Print the maximum value
    return 0;
}
