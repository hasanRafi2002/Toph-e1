
import Foundation

func hasCarry(_ A: Int, _ B: Int)-> Bool{
    var A = A
    var B = B
    var carry = 0

    while A>0 || B>0 {
        let sum = (A%10) + (B%10) + carry

        if sum >= 10{
            return true
        }
        carry = sum/10
        A/=10
        B/=10
    }
    return false
}

if let input = readLine(){
    let numbers = input.split(separator: " ").map { Int($0)!}
    let A = numbers[0]
    let B = numbers[1]

    if hasCarry(A,B){
        print("Yes")
    }else{
        print("No")
    }
}