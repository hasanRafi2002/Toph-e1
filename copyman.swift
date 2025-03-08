// import Foundation

// let input = readLine()!
// let numbers = input.split(separator: " ").map { Int($0)! }
// let sum = numbers[0] + numbers[1]
// print(sum)


// if let input = readLine(), let A = Int(input.split(separator: " ")[0]), let B = Int(input.split(separator: " ")[1]) {
//     print(A + B)
// }



// print("Enter your age: ")
// if let input = readLine(), let age = Int(input) {
//     print("You are \(age) years old.")
// } else {
//     print("Invalid input. Please enter a number.")
// }




// import Foundation

// let filePath = "/path/to/file.txt"
// if let content = try? String(contentsOfFile: filePath, encoding: .utf8) {
//     print(content)
// } else {
//     print("Could not read file.")
// }


// print("Enter text: ")
// if let input = readLine(strippingNewline: false) {
//     print("You entered: \(input)")  // Output includes \n
// }



// if let input = readLine() {
//     let parts = input.split(separator: " ").compactMap { Int($0) }
//     if parts.count == 2 {
//         print(parts[0] + parts[1])
//     } else {
//         print("Please enter exactly two numbers.")
//     }
// }

import Foundation

func formatNumber(_ A: Int) -> String {
    let numString = String(A)  // Convert integer to string
    var result = ""
    var count = 0

    // Iterate from right to left
    for char in numString.reversed() {
        result.insert(char, at: result.startIndex)  // Insert digit at the start
        count += 1
        if count % 3 == 0 && count != numString.count {  
            result.insert(",", at: result.startIndex)  // Insert comma
        }
    }
    
    return result
}

// Read input and print formatted number
if let input = readLine(), let A = Int(input) {
    print(formatNumber(A))
}
