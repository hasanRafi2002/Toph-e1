import Foundation

if let input = readLine(){
    var result = ""

    if let firstChar = input.first{
        result.append(firstChar.uppercased())
    }

    for char in input.dropFirst(){
        switch char{
            case "s": result.append("$")
            case "i": result.append("!")
            case "o": result.append("()")
            default: result.append(char)
        }
    }
    result.append(".")
    print(result)
}