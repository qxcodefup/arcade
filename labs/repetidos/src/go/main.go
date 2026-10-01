package main

import "fmt"

func main() {
	var target, n, value, count int
	fmt.Scan(&target, &n)
	for i := 0; i < n; i++ {
		fmt.Scan(&value)
		if value == target {
			count++
		}
	}
	fmt.Println(count)
}
