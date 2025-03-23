import Foundation

// Read input as strings
let input = readLine()!.split(separator: " ")
let A = String(input[0])
let B = String(input[1])

// Extract last digits
let lastDigitA = Int(String(A.last!))!
let lastDigitB = Int(String(B.last!))!

// Check parity
if (lastDigitA + lastDigitB) % 2 == 0 {
    print("Black")
} else {
    print("White")
}
