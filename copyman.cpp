#include <iostream>
using namespace std;

int main() {
    string A;
    cin >> A;

    // Convert first character to uppercase
    if (!A.empty()) {
        A[0] = toupper(A[0]);
    }

    // Replace characters as per the given rules
    for (char &c : A) {
        if (c == 's') c = '$';
        else if (c == 'i') c = '!';
        else if (c == 'o') c = '(';
    }

    // Append a period at the end
    A += '.';

    // Output the transformed password
    cout << A << endl;

    return 0;
}
