import Foundation

if let N = readLine(){
    var freq = [Int](repeating: 0, count: 10)

    for char in N{
        if let digit = char.wholeNumberValue{
            freq[digit] += 1
        }
    }

    var maxFreq = 0
    var resultDigit = 0

    for i in 0..<10{
        if freq[i]>maxFreq{
            maxFreq = freq[i]
            resultDigit = i
        }
    }
    print(resultDigit)
}