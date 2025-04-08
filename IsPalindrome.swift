import Foundation

func isPalindrome(_ s:String)->Bool{
    let characters = Array(s)
    var left = 0
    var right  = characters.count-1

    while left<right{
        if characters[left] != characters[right]{
            return false
        }
        left += 1
        right -= 1
    }
    return true

}

let s = readLine()!
if isPalindrome(s){
    print("Yes")
}else{
    print("No")
}