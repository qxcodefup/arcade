package main

import "fmt"

func main() {
	var n, low, high, value, count int
	fmt.Scan(&n, &low, &high)
	for i := 0; i < n; i++ {
		fmt.Scan(&value)
		if value >= low && value <= high {
			count++
		}
	}
	fmt.Println(count)
}
