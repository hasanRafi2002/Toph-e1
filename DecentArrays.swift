import Foundation

if let n = Int(readLine()!){
    let numbers = readLine()!.split(separator: " ").map {Int($0)!}
    var isAscending = true
    for i in 1..<n{
        if numbers[i]<numbers[i-1]{
            isAscending = false
            break
        }
    }
    print(isAscending ? "Yes": "No")
}