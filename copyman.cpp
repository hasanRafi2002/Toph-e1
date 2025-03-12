#include <iostream>
using namespace std;

string caesarCipher(string message, int shift) {
    for (char &c : message) {
        if (c >= 'a' && c <= 'z') {  // Lowercase letters
            c = (c - 'a' - shift + 26) % 26 + 'a';
        } 
        else if (c >= 'A' && c <= 'Z') {  // Uppercase letters
            c = (c - 'A' - shift + 26) % 26 + 'A';
        }
    }
    return message;
}

int main() {
    int N;
    string message;
    
    cin >> N;
    cin.ignore(); // Ignore newline character after N
    getline(cin, message);
    
    cout << caesarCipher(message, N) << endl;
    
    return 0;
}
