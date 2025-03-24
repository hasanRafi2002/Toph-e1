import Foundation

func isUppercase(word: String)-> Bool{
    return word == word.uppercased()
}

func removeUppercaseWords(from input: String)->String{
    let words = input.split(separator: " ")
    let filteredWords = words.filter{!isUppercase(word: String($0))}
    return filteredWords.joined(separator: " ")
}

let input = readLine() ?? ""

let result = removeUppercaseWords(from: input)
print(result)