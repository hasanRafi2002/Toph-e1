import Foundation

let input = readLine()!.split(separator: " ").map{Int($0)!}

let N = input[0]
let A = input[1]
let B = input[2]

let arr = readLine()!.split(separator: " ").map{Int($0)!}

var sum = 0;
for i in A...B{
    sum += arr[i]
}

print(sum)