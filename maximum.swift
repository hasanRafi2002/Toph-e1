import Foundation

if let N = Int(readLine()!){
    let numbers = readLine()!.split(separator: " ").prefix(N).compactMap{Int($0)}

    if let maxVal = numbers.max(){
        print(maxVal)
    }
}