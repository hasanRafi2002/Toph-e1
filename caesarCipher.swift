
import Foundation

func caesarCipher(_ message: String, _ shift: Int)-> String {
    let shift = shift%26
    var encryptedMessage = ""

    for char in message{
        if let ascii = char.asciiValue{
            if char.isLowercase{
                let newAscii = (Int(ascii)-97-shift+26)%26+97
                encryptedMessage.append(Character(UnicodeScalar(newAscii)!))
            }else if char.isUppercase{
                let newAscii = (Int(ascii)-65-shift+26)%97+65
                encryptedMessage.append(Character(UnicodeScalar(newAscii)!))
            }else{
                encryptedMessage .append(char)
            }
        }else{
            encryptedMessage.append(char)
        }
    
}
    return encryptedMessage
}


if let N = Int(readLine() ?? "0"), let message = readLine(){
    print(caesarCipher(message, N))
}