
// let age = 12
// print("Enter your age: ")
// if let input = readLine(), let age = Int(input){
//     print("you are \(age) years old")
    
// }else{
//     print("Invalid Input. Please Enter a correct number")
    
// }

// print("your  \(age) ")

// if let input = readLine() {
//     let numbers = input.split(separator: " ").compactMap { Int($0) }
//     if numbers.count == 2 {
//         print(numbers[0] + numbers[1])
//     }
// }


// if let input = readLine() {
//     let numbers = input.split(separator: " ").compactMap { Int($0) }
//     if numbers.count >= 2 {
//         print(numbers[0] + numbers[1])
//     } else {
//         print("Please enter at least two numbers.")
//     }
// }



if let input = readLine(){
    let parts  = input.split(separator: " ").compactMap{Int($0)}
    if parts.count == 2 {
        print(parts[0]+parts[1])
    }else{
        print("Please enter exactly two numbers.")
    }
}