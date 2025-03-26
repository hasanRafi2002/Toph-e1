#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);  // Read full line (supports spaces)

    int count = 0;
    for (char c : input) {
        if (c == 'X' || c == 'x') {  
            count++;  
        }
    }

    cout << count << endl;
    return 0;
}
