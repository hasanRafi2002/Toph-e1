import Foundation

func printFibonacciInRange(L: Int, R: Int) {
    var a = 0, b = 1
    var fibSet = Set<Int>() // Use a Set to avoid duplicate 1

    // Generate Fibonacci numbers until they exceed R
    while a <= R {
        if a >= L {
            fibSet.insert(a)
        }
        let next = a + b
        a = b
        b = next
    }

    // Convert Set to a sorted array and print
    let sortedFibNumbers = Array(fibSet).sorted()
    for num in sortedFibNumbers {
        print(num)
    }
}

// Read input
if let input = readLine() {
    let values = input.split(separator: " ").compactMap { Int($0) }
    if values.count == 2 {
        let L = values[0], R = values[1]
        printFibonacciInRange(L: L, R: R)
    }
}
