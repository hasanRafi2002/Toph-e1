import Foundation

if let input = readLine(), let n = Int(input){
    let sum = Int(pow(2.0, Double(n-1)))
    print(sum)
}