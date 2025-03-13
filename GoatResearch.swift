import Foundation

func makeEvenBaaaa(_ s: String )-> String {
    var modified = s
    let aCount  = modified.count - 1

    if aCount % 2 != 0{
        if aCount == 1{
            modified.append("a")
        }else{
            modified.removeLast()
        }
    }
    return modified
}

if let N = Int(readLine() ?? "0"), N>0, N<20{
    var lines: [String] = []
    var maxLength = 0

    for _ in 0..<N{
        if let line = readLine(){
            let adjustedLine = makeEvenBaaaa(line)
            lines.append(adjustedLine)
            maxLength = max(maxLength, adjustedLine.count)

        }
    }

    for line in lines{
        let spaces = (maxLength - line.count)/2
        let paddedLine = String(repeating: " ", count: spaces) + line
        print(paddedLine)

    }
}