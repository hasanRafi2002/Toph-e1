#include <iostream>
using namespace std;

int main() {
    int Y;
    cin >> Y;

    if ((Y % 4 == 0 && Y % 100 != 0) || (Y % 400 == 0)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
