import Foundation

func isPrime(_ n: Int) -> Bool{
    if n<=1{
        return false
    }
    for i in 2...Int(Double(n).squareRoot()){
        if n%i == 0{
            return false
        }
    }
    return true
}

if let input = readLine(), let number = Int(input){
    if isPrime(number){
        print("Yes")
    }else{
        print("No")
    }
}