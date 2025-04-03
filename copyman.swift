import Foundation

// Read N
if let N = Int(readLine()!) {
    // Read N numbers and convert them to an array of integers
    let numbers = readLine()!.split(separator: " ").prefix(N).compactMap { Int($0) }
    
    if let maxVal = numbers.max() {
        print(maxVal) // Print the maximum value
    }
}
