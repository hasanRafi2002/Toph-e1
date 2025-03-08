// // #include <iostream>
// // #include <string>
// // #include <algorithm>
// // using namespace std;

// // string formatNumber(int A) {
// //     string num = to_string(A);
// //     int n = num.size();
// //     string result;
// //     int count = 0;
    
// //     for (int i = n - 1; i >= 0; --i) {
// //         result.push_back(num[i]);
// //         count++;
// //         if (count % 3 == 0 && i != 0) {
// //             result.push_back(',');
// //         }
// //     }
// //     reverse(result.begin(), result.end());
// //     return result;
// // }

// // int main() {
// //     int A;
// //     cin >> A;
// //     cout << formatNumber(A) << endl;
// //     return 0;
// // }





// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int A;
//     cin >> A;

//     string num = to_string(A); // Convert number to string
//     int len = num.length();

//     string result;
//     int count = 0;

//     // Iterate from right to left and insert commas every 3 digits
//     for (int i = len - 1; i >= 0; --i) {
//         result = num[i] + result; // Append current digit
//         count++;
//         if (count % 3 == 0 && i != 0) {
//             result = ',' + result; // Insert comma
//         }
//     }

//     cout << result << endl; // Print formatted number
//     return 0;
// }




#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int H, M;
    cin >> H >> M;

    // Calculate angles
    double minuteAngle = M * 6.0;               // Each minute moves 6 degrees (360/60)
    double hourAngle = (H % 12) * 30.0 + M * 0.5; // Each hour moves 30 degrees (360/12) + 0.5 degrees per minute

    // Find the absolute difference
    double angle = abs(hourAngle - minuteAngle);

    // Get the smaller angle
    angle = min(angle, 360.0 - angle);

    // Print result with precision
    cout << fixed << setprecision(4) << angle << endl;

    return 0;
}
