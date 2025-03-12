#include <iostream>
#include <string>
using namespace std;

int main() {
    string N;
    cin >> N;

    int freq[10] = {0};

    // Count frequency of each digit
    for (char digit : N) {
        freq[digit - '0']++;
    }

    // Find the most frequent digit (smallest in case of tie)
    int maxFreq = 0, resultDigit = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            resultDigit = i;
        }
    }

    cout << resultDigit << endl;
    return 0;
}
