import Foundation

let input = readLine()!.split(separator: " ").map{Int($0)!}

let M = input[0]
let K = input[1]

print(M%K)