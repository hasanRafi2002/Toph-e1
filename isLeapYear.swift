import Foundation

if let input = readLine(), let year = Int(input){
    // problem says A leap year occurs when the year is a multiple of 4 but not a multiple of 400.
    if((year%4 == 0 && year%100 != 0) && (year%400 != 0 )){
        print("Yes")
    }else{
        print("No")
    }
}