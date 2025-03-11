
import Foundation

if let input = readLine(), let N = Int(input){
    for i in 1...N{
        let spaces = String(repeating: " ", count: N-i)
        let stars = (1...i).map{_ in "*"}.joined(separator:" ")
        print(spaces + stars)

}
}