package main

import "fmt"

func main() {
	var n, size int
	var side string
	fmt.Scan(&n)
	right := map[int]int{}
	left := map[int]int{}
	for i := 0; i < n; i++ {
		fmt.Scan(&size, &side)
		if side == "D" {
			right[size]++
		} else {
			left[size]++
		}
	}
	pairs := 0
	for size, count := range right {
		if left[size] < count {
			pairs += left[size]
		} else {
			pairs += count
		}
	}
	fmt.Println(pairs)
}
