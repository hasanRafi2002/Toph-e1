import Foundation

func findMinimumNotes(_ N: Int) {
    let denominations = [500, 100, 50, 10, 5, 1] // Descending order
    var amount = N
    var result: [Int] = []

    // Find the minimum number of notes
    for note in denominations {
        while amount >= note {
            amount -= note
            result.append(note)
        }
    }

    // Sort in ascending order
    result.sort()

    // Print the result
    print(result.map { String($0) }.joined(separator: " "))
}

// Read input and call function
if let input = readLine(), let N = Int(input) {
    findMinimumNotes(N)
}
