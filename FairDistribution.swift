import Foundation

if let input = readLine(){
    let values = input.split(separator: " ").compactMap{Int($0)}
    if values.count == 2{
        let X = values[0]
        let Y = values[1]
        let remainder = Y%X
        let additionalChocolets = (remainder == 0) ? 0:(X-remainder)

        print(additionalChocolets)
    }
}