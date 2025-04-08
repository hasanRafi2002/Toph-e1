import Foundation

let input = readLine()!
let numbers = input.split(separator: " ").map{Int($0)!}

let N = numbers[0]
let D = numbers[1]

let whole = N/D
let remainder = N%D

print("\(whole) \(remainder) \(D)")