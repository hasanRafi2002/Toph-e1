import Foundation

let input = readLine()!.split(separator: " ").map{Int($0)!}
let R = input[0]
let C = input[1]

var grid = [[Character]]()
for _ in 0..<R{
    let row = Array(readLine()!)
    grid.append(row)
}

let dx = [-1, 1, 0, 0]
let dy = [0, 0 , -1, 1]

var safeSpots = 0
for i in 0..<R{
    for j in 0..<C{
        if grid[i][j] == "."{
            var isSafe = true
            for k in 0..<4{
                let ni = i+dx[k]
                let nj = j+dy[k]
                if ni >= 0 && ni < R && nj >= 0 && nj < C && grid[ni][nj] == "*"{
                    isSafe = false
                    break
                }
            }
                if isSafe{
        safeSpots += 1
            }
        }
    }
}
print(safeSpots)