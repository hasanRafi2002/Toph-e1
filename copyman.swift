import Foundation

// Function to check if a word is fully uppercase
func isUppercase(word: String) -> Bool {
    return word == word.uppercased()
}

// Main part of the program
func removeUppercaseWords(from input: String) -> String {
    // Split the input into words
    let words = input.split(separator: " ")
    
    // Filter out the words that are in uppercase
    let filteredWords = words.filter { !isUppercase(word: String($0)) }
    
    // Join the remaining words back into a string with a space separator
    return filteredWords.joined(separator: " ")
}

// Read input
let input = readLine() ?? ""

// Call the function and print the result
let result = removeUppercaseWords(from: input)
print(result)
