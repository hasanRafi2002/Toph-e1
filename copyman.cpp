#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    // Convert both strings to lowercase
    transform(A.begin(), A.end(), A.begin(), ::tolower);
    transform(B.begin(), B.end(), B.begin(), ::tolower);

    // Sort both strings
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    // Compare sorted strings
    if (A == B) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
