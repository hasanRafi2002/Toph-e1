import Foundation

if let input = readLine(), let r = Double(input){
    let area = Double.pi*r*r;
    print(String(format:"%.10f", area))
}