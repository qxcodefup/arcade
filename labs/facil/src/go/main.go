package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	heights := make([]int, n)
	for i := range heights {
		fmt.Scan(&heights[i])
	}
	forward, backward := 0, 0
	for i := 1; i < n; i++ {
		if heights[i] > heights[i-1] {
			forward += heights[i] - heights[i-1]
		}
		if heights[n-i-1] > heights[n-i] {
			backward += heights[n-i-1] - heights[n-i]
		}
	}
	if forward < backward {
		fmt.Println(forward)
	} else {
		fmt.Println(backward)
	}
}
