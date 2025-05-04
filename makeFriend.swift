import Foundation

if let input = readLine(), let N = Int(input){
    var count = 0;
    for i in 1...(N/2){
        if N%i == 0{
            count += 1
        }
    }
    print(count)
}