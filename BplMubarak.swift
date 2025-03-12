import Foundation

if let T = Int(readLine()!){
    for _ in 0..<T{
        if let S = readLine(){
            var legalBalls = 0

            for char in S{
                if char.isNumber || char == "O"{
                    legalBalls += 1
                }
            }

            let overs = legalBalls/6
            let balls = legalBalls%6

            var result = ""
            if overs > 0{
                result += "\(overs) OVER"
                if overs > 1 {result += "S"}
            }
            if balls>0{
                if !result.isEmpty{result += " "}
                result += "\(balls) BALL"
                if balls>1{result += "S"}
            }
            print(result)
        }
    }
}