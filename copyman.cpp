#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int balance = 0;

    for (char ch : s) {
        if (ch == '(') {
            balance++;
        } else if (ch == ')') {
            balance--;
            // If at any point balance is negative, it's invalid
            if (balance < 0) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    // After processing all characters, balance must be 0
    if (balance == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
