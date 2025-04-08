import Foundation

// Function to check if a string is a palindrome
func isPalindrome(_ s: String) -> Bool {
    let characters = Array(s)  // Convert string to an array of characters
    var left = 0
    var right = characters.count - 1
    
    while left < right {
        if characters[left] != characters[right] {
            return false  // If characters don't match, it's not a palindrome
        }
        left += 1
        right -= 1
    }
    return true  // If all characters match, it's a palindrome
}

// Main program
let s = readLine()!  // Read input string
if isPalindrome(s) {
    print("Yes")  // If palindrome, print "Yes"
} else {
    print("No")  // If not a palindrome, print "No"
}
