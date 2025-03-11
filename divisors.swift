
import Foundation

if let input = readLine(), let A = Int(input){
    for i in 1...A{
        if A%i == 0 {
            print(i)
        }
    }
}