import Foundation

// Read the total sum of the four numbers
let totalSum = Int(readLine()!)!

// Read the three known numbers
let numbers = readLine()!.split(separator: " ").map { Int($0)! }

// Calculate the sum of the three known numbers
let knownSum = numbers.reduce(0, +)

// Calculate the missing number
let missingNumber = totalSum - knownSum

// Output the missing number
print(missingNumber)
