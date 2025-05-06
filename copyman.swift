import Foundation

// Read the input values
let input = readLine()!.split(separator: " ").map { Int($0)! }
let N = input[0]
let A = input[1]
let B = input[2]

// Read the array elements
let arr = readLine()!.split(separator: " ").map { Int($0)! }

// Calculate the sum from index A to B (inclusive)
var sum = 0
for i in A...B {
    sum += arr[i]
}

// Output the result
print(sum)
