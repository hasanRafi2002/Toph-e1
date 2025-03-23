import Foundation

// Function to calculate the Euclidean distance between two points
func distance(x1: Int, y1: Int, x2: Int, y2: Int) -> Double {
    return sqrt(Double((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)))
}

// Read the number of points
if let n = Int(readLine()!) {
    var points = [(Int, Int)]()  // Array to store (x, y) coordinates

    // Read points from input
    for _ in 0..<n {
        let input = readLine()!.split(separator: " ").map { Int($0)! }
        points.append((input[0], input[1]))
    }

    // Initialize the minimum distance to a very large value
    var minDist = Double.greatestFiniteMagnitude

    // Compare all pairs of points
    for i in 0..<n {
        for j in i+1..<n {  // Avoid self-comparison and redundant pairs
            let dist = distance(x1: points[i].0, y1: points[i].1, x2: points[j].0, y2: points[j].1)
            minDist = min(minDist, dist)
        }
    }

    // Print the minimum distance with high precision
    print(String(format: "%.14f", minDist))
}
