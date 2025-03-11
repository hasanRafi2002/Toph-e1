import Foundation

// Read input string
if let input = readLine() {
    var result = ""

    // Convert the first character to uppercase and add to result
    if let firstChar = input.first {
        result.append(firstChar.uppercased())
    }

    // Process the rest of the characters
    for char in input.dropFirst() {
        switch char {
        case "s": result.append("$")
        case "i": result.append("!")
        case "o": result.append("()") // Replace 'o' with "()"
        default: result.append(char)
        }
    }

    // Append a period at the end
    result.append(".")

    // Output the transformed password
    print(result)
}
