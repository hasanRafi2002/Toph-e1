import Foundation

if let input = readLine(){
    var balance = 0
    var isValid  = true

    for char in input{
        if char == "("{
            balance += 1
        }else if (char == ")"){
            balance -= 1
            if balance < 0{
                isValid = false
                break
            }
        }
    }
    if isValid && balance == 0{
        print("Yes")
    }else{
        print("No")
    }
}