#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long result = 1;
    for (int i = 2; i <= N; i++) {
        result *= i;
        result %= 10000;  // Keep only the last 4 digits
    }

    // Check if more than 3 trailing zeros exist
    if (result % 10000 == 0) {  // Means last 4 digits are all zeros
        cout << "0000" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
