import Foundation

if let input = readLine(), let P = Double(input){
    let percentage = Int(floor(P))
    let progress = percentage/10
    var bar = "["
    for _ in 0..<progress{
        bar += "+"
    }
    for _ in progress..<10{
        bar += "."
    }
    bar += "] "

    print("\(bar)\(percentage)%")
}