package main

import "fmt"

func main() {
	var n, value int
	fmt.Scan(&n)
	odds := make([]int, 0, n)
	evens := make([]int, 0, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&value)
		if value%2 == 0 {
			evens = append(evens, value)
		} else {
			odds = append(odds, value)
		}
	}
	printVector(odds)
	printVector(evens)
}
func printVector(values []int) {
	fmt.Print("[ ")
	for _, v := range values {
		fmt.Print(v, " ")
	}
	fmt.Println("]")
}
