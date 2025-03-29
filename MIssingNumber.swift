import Foundation

let totalSum = Int(readLine()!)!
let numbers = readLine()!.split(separator:" ").map{Int($0)!}
let knownSum = numbers.reduce(0, +)

let missingNumber = totalSum - knownSum
print(missingNumber)