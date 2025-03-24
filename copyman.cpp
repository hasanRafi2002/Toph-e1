#include <iostream>
#include <sstream>
using namespace std;

// Function to check if a word is fully uppercase
bool isUppercase(const string &word) {
    for (char ch : word) {
        if (!isupper(ch)) return false;
    }
    return true;
}

int main() {
    string line, word, result;
    getline(cin, line); // Read the input line

    stringstream ss(line);
    bool first = true;

    while (ss >> word) {
        if (!isUppercase(word)) {
            if (!first) result += " "; // Add space before next word
            result += word;
            first = false;
        }
    }

    cout << result << endl;
    return 0;
}