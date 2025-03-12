import Foundation

func caesarCipher(_ message: String, _ shift: Int) -> String {
    let shift = shift % 26  // Ensure shift is within 0-25
    var encryptedMessage = ""

    for char in message {
        if let ascii = char.asciiValue {
            if char.isLowercase {
                let newAscii = (Int(ascii) - 97 - shift + 26) % 26 + 97
                encryptedMessage.append(Character(UnicodeScalar(newAscii)!))
            } else if char.isUppercase {
                let newAscii = (Int(ascii) - 65 - shift + 26) % 26 + 65
                encryptedMessage.append(Character(UnicodeScalar(newAscii)!))
            } else {
                encryptedMessage.append(char) // Keep spaces and special characters unchanged
            }
        } else {
            encryptedMessage.append(char) // Keep non-ASCII characters unchanged
        }
    }
    
    return encryptedMessage
}

// Read input
if let N = Int(readLine() ?? "0"),
   let message = readLine() {
    print(caesarCipher(message, N))
}
