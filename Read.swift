
import Foundation

let filePath = "./file.txt"
if let content = try? String(contentsOfFile: filePath, encoding: .utf8){
    print(content)
}else{
    print("Could not read file.")
    
}