import Foundation

let A = readLine()!
let B = readLine()!

let sortedA = String(A.lowercased().sorted())
let sortedB = String(B.lowercased().sorted())

if sortedA == sortedB {
    print("Yes")
}else{
    print("No")
}