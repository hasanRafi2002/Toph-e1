
import Foundation

if let input = readLine(){
    let values = input.split(separator: " ").compactMap{Int($0)}

    if values.count == 2{
        let H = values[0]
        let M = values[1]

        let minuteAngle = Double(M)*6
        let hourAngle = Double(H%12)*30 + Double(M)*0.5

        let angle = abs(hourAngle-minuteAngle)
        let smallerAngle = min(angle, 360-angle)

        print(String(format:"%.4f", smallerAngle))
    }
}
