import Foundation

func factorialLast4Digits(_ n: Int) -> Int {
    var result = 1
    for i in 2...n {
        result *= i
        result %= 10000  // Keep only the last 4 digits
    }
    return result
}

// Read input
if let input = readLine(), let N = Int(input) {
    let fact = factorialLast4Digits(N)

    if fact == 0 {
        print("0000") // If the last 4 digits are all zeros
    } else if fact > 1000 {
        print(String(format: "%04d", fact)) // Ensure 4 digits with leading zeros
    } else {
        print(fact) // Print normally for 4-digit numbers
    }
}
