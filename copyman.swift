import Foundation

// Read input
if let input = readLine() {
    let values = input.split(separator: " ").compactMap { Int($0) }
    
    if values.count == 2 {
        let H = values[0]
        let M = values[1]

        // Step 1: Calculate angles
        let minuteAngle = Double(M) * 6.0 // Each minute moves 6 degrees
        let hourAngle = Double(H % 12) * 30.0 + Double(M) * 0.5 // Each hour moves 30 degrees + extra 0.5 per minute

        // Step 2: Find absolute difference
        let angle = abs(hourAngle - minuteAngle)

        // Step 3: Get the smaller angle
        let smallerAngle = min(angle, 360.0 - angle)

        // Step 4: Print the result with 4 decimal places
        print(String(format: "%.4f", smallerAngle))
    }
}
