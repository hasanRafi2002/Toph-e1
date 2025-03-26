import Foundation

if let input = readLine() {
    let count = input.filter { $0 == "X" || $0 == "x" }.count
    print(count)
}
