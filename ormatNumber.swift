
import Foundation

func formatNumber(_ A: Int) -> String {
    let numString = String(A)
    var result =  ""
    var  count = 0

    for char in numString.reversed(){
        result.insert(char, at: result.startIndex)
        count += 1
        if count % 3 == 0 && count != numString.count{
            result.insert(",", at: result.startIndex)
        }
    }
    return result

}

if let input = readLine(), let A = Int(input){
    print(formatNumber(A))
}