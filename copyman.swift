import Foundation

if let input = readLine(), let year = Int(input) {
    if (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) {
        print("Yes")
    } else {
        print("No")
    }
}
