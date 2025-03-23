import Foundation

func distance(x1: Int, y1: Int, x2: Int, y2: Int) -> Double{
    return sqrt(Double((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)))
}

    if let n = Int(readLine()!){
        var points = [(Int, Int)]()

        for _ in 0..<n{
            let input = readLine()!.split(separator: " ").map{Int($0)!}
            points.append((input[0], input[1]))
        }

        var minDist = Double.greatestFiniteMagnitude

        for i in 0..<n{
            for j in i+1..<n{
                let dist = distance(x1: points[i].0, y1:points[i].1, x2:points[j].0, y2:points[j].1)
                minDist = min(minDist, dist)
            }
        }
        print(String(format: "%.14f", minDist))
    }