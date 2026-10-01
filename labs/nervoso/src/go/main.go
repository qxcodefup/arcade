package main

import "fmt"

func main() {
	var n, value int
	fmt.Scan(&n)
	stack := make([]int, 0, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&value)
		if value == 0 {
			if len(stack) > 0 {
				stack = stack[:len(stack)-1]
			}
		} else {
			stack = append(stack, value)
		}
	}
	sum := 0
	for _, value := range stack {
		sum += value
	}
	fmt.Println(sum)
}
