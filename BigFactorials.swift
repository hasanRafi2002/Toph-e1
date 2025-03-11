
import Foundation

func factorialLast4Digits(_ n: Int)->Int{
    var result = 1
    for i in 2...n{
        result *= i
        result %= 10000
    }
    return result
}

if let input = readLine(), let N = Int(input){
    let fact = factorialLast4Digits(N)

    if fact == 0{
        print("0000")
    }else{
        print(fact)
    }
}