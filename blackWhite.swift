import Foundation

let input = readLine()!.split(separator: "")
let A = String(input[0])
let B = String(input[1])

let lastDigitA = Int(String(A.last!))!
let lastDigitB = Int(String(B.last!))!

if(lastDigitA+lastDigitB%2==0){
    print("Black")
}else{
    print("White")
}