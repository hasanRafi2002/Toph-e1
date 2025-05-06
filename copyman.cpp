#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    vector<int> arr(N);

    // Input the array elements
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Calculate the sum from index A to B (inclusive)
    int sum = 0;
    for (int i = A; i <= B; i++) {
        sum += arr[i];
    }

    // Output the result
    cout << sum << endl;

    return 0;
}
