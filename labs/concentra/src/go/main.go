package main

import "fmt"

func main() {
	var left, right int
	fmt.Scan(&left, &right)
	fmt.Print("[ ")
	end := right
	for left <= end {
		fmt.Print(left, " ", right, " ")
		left++
		right--
	}
	fmt.Println("]")
}
