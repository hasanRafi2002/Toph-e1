
import Foundation

func findMinimumNotes(_ N: Int){
    let denominations = [500, 100, 50, 10, 5, 1]
    var amount = N
    var result: [Int] = []

    for note in denominations{
        while amount >= note{
            amount -= note
            result.append(note)
        }
    }
    result.sort()
    print(result.map{String($0)}.joined(separator: " "))
}

if let input = readLine(), let N = Int(input){
    findMinimumNotes(N)
}