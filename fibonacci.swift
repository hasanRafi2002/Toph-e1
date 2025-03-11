import Foundation

if let input = readLine(), let N = Int(input){
    if N == 1 || N == 2 {
        print(1)
    }else{
        var a = 1, b = 1, fib = 0
        for _ in 3...N{
            fib = a+b
            a=b
            b=fib
        }
        print(fib)
    }
}